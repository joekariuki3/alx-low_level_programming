/*
 * standard header and
 * custom header
 */
#include<stdlib.h>
#include"main.h"

/**
 * create_array - creates an array and assigns a character to it
 * @size: size of the array
 * @c: character assigned to the array
 * Return: a chacter
 */
char *create_array(unsigned int size, char c)
{
	char *name;

	if (size != 0)
	{
		int i;

		name = malloc(size * sizeof(char));
		if (name == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			name[i] = c;
		}
		return (name);
	}
	else
	{
		return (NULL);
	}
}
