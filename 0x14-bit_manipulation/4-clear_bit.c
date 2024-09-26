#include "main.h"

/**
 * clear_bit - Clears (sets to 0) the value of a bit at a given index.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to clear (0-based).
 *
 * Return: 1 for success, -1 for failure (if index is out of range).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
        return (-1);

    /* Clear the bit at the specified index */
    *n &= ~(1UL << index);
    return (1);
}
