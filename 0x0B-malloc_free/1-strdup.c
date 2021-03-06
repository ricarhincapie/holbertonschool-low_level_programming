#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copies an string into a new memory allocation
 * @str: the pointer to the string to copy
 *
 * Return: Pointer to the new string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j;


	i = 0;
	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	i += 1;

	ptr = malloc(i * (sizeof(char)));
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (j <= i)
	{
		ptr[j] = str[j];
		j++;
	}
	return (ptr);
}
