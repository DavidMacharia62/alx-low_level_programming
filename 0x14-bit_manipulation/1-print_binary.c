#include "main.h"
/**
 * print_binary - This function prints the binary
 * representation of a number.
 * @n: The number that is to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
