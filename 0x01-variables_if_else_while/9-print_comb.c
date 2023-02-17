/**
 * main - entry point into the c program
 * Description: prints single digit numbers
 * Return: always 0 (success)
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
