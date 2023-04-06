#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 for big, 1 for little endians
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *b = (char *) &x;

	return (*b);
}
