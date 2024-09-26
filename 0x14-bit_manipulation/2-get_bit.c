#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a given index in a decimal number.
 * @n: The number to search.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the specified index (0 or 1),
 *         or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /* Check if the index is valid (within 0 to 63 for unsigned long int) */
    if (index > 63)
        return (-1);

    /* Right-shift the number by 'index' and mask the least significant bit */
    return ((n >> index) & 1);
}
