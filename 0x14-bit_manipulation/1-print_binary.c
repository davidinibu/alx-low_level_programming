#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: The decimal number to print in binary.
 */
void print_binary(unsigned long int n)
{
    int i;
    int started = 0;  /* Flag to track when to start printing */
    unsigned long int current_bit;

    /* Iterate over each bit from most significant (63) to least (0) */
    for (i = 63; i >= 0; i--)
    {
        current_bit = n >> i;

        if (current_bit & 1)
        {
            _putchar('1');
            started = 1;  /* Once a '1' is printed, start printing 0s */
        }
        else if (started)
        {
            _putchar('0');
        }
    }

    /* If no bits were printed, print a single '0' */
    if (!started)
    {
        _putchar('0');
    }
}

