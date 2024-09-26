#include "main.h"

/**
 * get_endianness - Checks if the machine is little-endian or big-endian.
 *
 * Return: 1 if little-endian, 0 if big-endian.
 */
int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char *) &i;

    return (*c);
}

