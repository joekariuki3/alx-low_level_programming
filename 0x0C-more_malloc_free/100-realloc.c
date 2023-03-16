/*
 * include standard lib header
 * and main header
 */
#include<stdlib.h>
#include"main.h"

/**
 * _realloc - reallocates memory using malloc
 * @ptr: previous pointer to current memory
 * @old_size: current size of current memory
 * @new_size: new size of the new memory
 * Return: new poiter with updated size and retains currect values
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *newptr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			return (NULL);
		}
		return (newptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return (NULL);
	}
	else
	{
		/* copy items from old ptr to newptr */
		for (i = 0; i < old_size && i < new_size; i++)
		{
			newptr[i] = ((char *) ptr)[i]; /* Type cast ptr from void to char  */
		}
		free(ptr);
		return (newptr);
	}
}
