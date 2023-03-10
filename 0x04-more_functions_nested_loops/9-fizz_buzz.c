#include <stdio.h>

/**
 * main - entry
 * Description: Write a program that prints the numbers from 1 to 100,
 * for multiples of 3, print 'fizz'
 * for multiples of 5, print buzz
 * for multiples of both 3 & 5, print 'fizzbuzz'
 * followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}
