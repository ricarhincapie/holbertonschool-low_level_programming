#include "holberton.h"

/**
 * swap_int - checks if c is lowercase
 * @a: the ponter to be used
 * @b: the ponter to be used
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int rep;

	rep = *a;
	*a = *b;
	*b = rep;
}
