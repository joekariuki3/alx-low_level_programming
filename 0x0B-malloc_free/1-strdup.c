/*
 * standard header and
 * custom header
 */
#include<stdlib.h>
#include"main.h"

/**
 * _strdup - creates an array and assigns a character to it
 * @str: string to be dublicated
 * Return: array
 */
char *_strdup(char *str)
{
	char *name;

	if (str != NULL)
	{
		unsigned int i, size;

		for (size = 0; str[size] != '\0'; size++)

		name = malloc((size + 1) * sizeof(char));
		if (name == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			name[i] = str[i];
		}
		return (name);
		free(name);
	}
	else
	{
		return (NULL);
	}
}
