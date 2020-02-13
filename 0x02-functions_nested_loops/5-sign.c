#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_sign - checks whether n is positive, negative or zero
 * @n: integer to test.
 * Return: 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
