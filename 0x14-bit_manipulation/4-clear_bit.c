#include "main.h"

/**
 * clear_bit - Function sets the value of a bit at an index to 0
 * @n: A pointer to the bit to be set to 0.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Else - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
