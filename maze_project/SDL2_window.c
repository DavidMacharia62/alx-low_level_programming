#include <SDL2/SDL.h>
#include <stdbool.h>
#include <math.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define MAP_WIDTH 8
#define MAP_HEIGHT 8
#define WALL_SIZE 64

int map[MAP_WIDTH][MAP_HEIGHT] = {
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 1, 0, 0, 1},
    {1, 0, 1, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 1, 1, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}
};

double player_x = 300;
double player_y = 300;
double player_angle = M_PI / 3;

int main() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("Raycasting Demo", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    if (!window) {
        SDL_Quit();
        return 1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    bool quit = false;
    while (!quit) {
        SDL_Event event;
        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        // Raycasting logic
        for (int x = 0; x < SCREEN_WIDTH; x++) {
            double ray_angle = player_angle - M_PI / 6 + (x / (double)SCREEN_WIDTH) * M_PI / 3;

            double ray_x = player_x;
            double ray_y = player_y;
            double step_x = cos(ray_angle);
            double step_y = sin(ray_angle);

            bool hit_wall = false;
            double distance_to_wall = 0.0;

            while (!hit_wall && distance_to_wall < 800) { // Max rendering distance
                ray_x += step_x;
                ray_y += step_y;

                int map_x = (int)(ray_x / WALL_SIZE);
                int map_y = (int)(ray_y / WALL_SIZE);

                if (map_x >= 0 && map_x < MAP_WIDTH && map_y >= 0 && map_y < MAP_HEIGHT) {
                    if (map[map_x][map_y] == 1) {
                        hit_wall = true;
                        distance_to_wall = sqrt((ray_x - player_x) * (ray_x - player_x) + (ray_y - player_y) * (ray_y - player_y));
                    }
                }
            }

            int wall_height = (int)(SCREEN_HEIGHT / (distance_to_wall * cos(ray_angle - player_angle)));
            int wall_top = (SCREEN_HEIGHT - wall_height) / 2;
            int wall_bottom = wall_top + wall_height;

            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            SDL_RenderDrawLine(renderer, x, wall_top, x, wall_bottom);
        }

        // Draw player position
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Red for the player
        SDL_RenderDrawPoint(renderer, (int)player_x, (int)player_y);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
