#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to a string representing a binary number.
 *
 * Return: The converted unsigned integer value, or 0 if the input is invalid.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int dec_val = 0;
    int i;

    if (!b)
        return 0;

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        dec_val = (dec_val * 2) + (b[i] - '0');
    }

    return dec_val;
}

