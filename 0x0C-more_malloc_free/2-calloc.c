/*
 * include standard lib
 * and our custom main header file
 */
#include<stdlib.h>
#include<string.h>
#include"main.h"

/**
 * _calloc - assign memory to an array using malloc and initialize with 0
 * @nmemb: +number of element in that specific array
 *@size: size of datatype e.g int,char
 *Return: a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		void *space;

		space = malloc(nmemb * size);
		if (space == NULL)
		{
			return (NULL);
		}
		else
		{
			memset(space, 0, nmemb * size);
			return (space);
		}
	}
}
