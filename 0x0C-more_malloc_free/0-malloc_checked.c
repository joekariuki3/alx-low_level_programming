/*
 * include standard lib
 */
#include<stdlib.h>

/**
 *malloc_checked - asigns memory using malloc
 *@b: required int size of the memory to allocate
 *Return: void pointer of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *digits;

	digits = malloc(b * sizeof(*digits));
	if (digits == NULL)
	{
		exit(98);
	}
	return (digits)
}
