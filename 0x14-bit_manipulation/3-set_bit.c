#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to set to 1 (0-based).
 *
 * Return: 1 for success, -1 for failure (if index is out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
        return (-1);

    /* Set the bit at the specified index to 1 */
    *n |= (1UL << index);
    return (1);
}
