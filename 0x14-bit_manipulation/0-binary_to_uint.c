#include "main.h"
#include <stddef.h>
/**
 * Binary_to_uint - Converts a binary number to unsigned int
 *
 * @b - the binary number to be converted
 *
 * Return the unsigned int 
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i;

    if (b == NULL)
        return 0;

    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0')
            result = (result << 1) + 0;
        else if (b[i] == '1')
            result = (result << 1) + 1;
        else
            return 0;
    }

    return result;
}
