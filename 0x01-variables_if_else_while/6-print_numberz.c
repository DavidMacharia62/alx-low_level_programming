/**
 * main - entry point to the c program
 * Description: prints characters below 10
 * Return: always 0 (successful)
 */


#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');

	return (0);
}
