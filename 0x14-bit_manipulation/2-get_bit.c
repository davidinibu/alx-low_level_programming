#include "main.h"

/**
 * get_bit - returns D value of a bit at an index in a decimal numbr
 * @n: numbr to search
 * @index: index of D bit
 *
 * Return: value of D bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
