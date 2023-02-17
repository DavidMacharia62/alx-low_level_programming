/**
 * main - entry point into the c program
 * Description: prints alphabets(a-z) in lowercase then uppercase
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

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
