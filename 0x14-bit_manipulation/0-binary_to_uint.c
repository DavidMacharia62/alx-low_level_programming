#include "main.h"
/**
 * Binary_to_uint - Converts a binary number to unsigned int
 * @b - the binary number to be converted
 * Return the unsigned int 
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int str_con = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		str_con = 2 * str_con + (b[n] - '0');
	}

	return (str_con);
}

