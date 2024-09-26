#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to convert one number
 * to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int i, count = 0;
    unsigned long int exclusive = n ^ m;

    /* Iterate over each bit and count how many differ between n and m */
    for (i = 63; i >= 0; i--)
    {
        if (exclusive & (1UL << i))
            count++;
    }

    return (count);
}
