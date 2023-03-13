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

		name = malloc(size * sizeof(char) + 1);
		if (name == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			name[i] = str[i];
		}
		name[i] = '\0';
		return (name);
	}
	else
	{
		return (NULL);
	}
}
