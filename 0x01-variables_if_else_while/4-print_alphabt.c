/**
 * main - the c program's entry point
 * Description: prints lowercase alphabets except 'e' and 'q'
 * Return: always 0 (successful)
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
