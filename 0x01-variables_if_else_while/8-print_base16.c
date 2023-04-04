/**
 * main - The program's  entry point
 * Description: print base 16 numbers
 * Return: always 0 (success)
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
