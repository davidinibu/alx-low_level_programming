#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a specified index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to set.
 *
 * Return: 1 on success, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}


