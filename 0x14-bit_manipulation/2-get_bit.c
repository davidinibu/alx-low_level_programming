#include"main.h"

/**
 * get_bit - Retrieves the value of a bit at a specified index.
 * @n: The number whose bits are to be checked.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit (0 or 1), or -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}

