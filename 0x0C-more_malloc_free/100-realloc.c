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
	int *newptr, *oldptr;
	unsigned int i;

	oldptr = ptr;
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return (NULL);
	}
	else
	{
		/* copy items from old ptr to newptr */
		for (i = 0; i < old_size; i++)
		{
			newptr[i] = oldptr[i];
		}
		free(ptr);
		return (newptr);
	}
}
