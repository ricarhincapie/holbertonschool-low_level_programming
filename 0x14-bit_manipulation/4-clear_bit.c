#include "holberton.h"

/**
 * clear_bit - Changes the bit to 1 at a given position
 * @n: integer to work with
 * @index: index # where the bit to change is
 * Return: 1 if ok, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (8 * (sizeof(unsigned long int) - 1)))
		return (-1);

	mask = 1;/*Create a mask with 1 at the index place*/
	mask = mask << index;

	*n = *n & ~mask;

	return (1);
}
