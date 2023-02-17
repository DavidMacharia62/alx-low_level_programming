/**
 * main - entry point into the c program
 * Description: prints lowercase alphabets in reverse
 * Return: always 0 (succesful)
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
