/**
 * main - entry point into the c program
 * Description: prints the alphabet in lowercase \n
 * Return: always 0 (successful)
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
