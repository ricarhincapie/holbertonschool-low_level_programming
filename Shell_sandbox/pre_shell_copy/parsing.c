#include "hsh.h"
/**
 * necklace_pearls - counts commands and options entered by user
 * @buffer: given command
 * Return: Number of arguments
*/
int necklace_pearls(char *buffer)
{
	int pearls = 0;
	char *delimiter = " =:'\n''\t'";
	int i = 0;
	int j = 0;

	while (buffer[i] != '\0')
	{
		for (j = 0; delimiter[j] != '\0'; j++)
		{
			if (buffer[i] == delimiter[j])
			{
				pearls++;
				break;
			}
		}
		i++;
	}
	return (pearls + 1);
}
/**
 * parsing - Function that splits a given string
 * @buffer: Given string
 * @characters: number of elements
 * Return: Tokenized string
*/
char **parsing(char *buffer, int characters)
{
	char **token_necklace = malloc(sizeof(char *) * characters);
	char *token = NULL;
	char *delimiter = " :'\n''\t'";
	int counter = 0;

	if (token_necklace == NULL)
	{
		return (NULL);
	}
	token = strtok(buffer, delimiter);
	while (token != NULL)
	{
		token_necklace[counter] = _strdup(token);
		token = strtok(NULL, delimiter);
		counter++;
	}
	token_necklace[counter] = token;
	return (token_necklace);
}
