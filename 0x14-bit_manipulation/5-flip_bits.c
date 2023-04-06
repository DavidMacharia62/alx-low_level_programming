#include "main.h"

/**
 * flip_bits - Counts bits flipped to get one number to another
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: Number of bits to flip to get to m from n.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mno = n ^ m, bits_flip = 0;

	while (mno > 0)
	{
		bits_flip += (mno & 1);
		mno >>= 1;
	}

	return (bits_flip);
}
