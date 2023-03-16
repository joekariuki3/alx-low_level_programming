/*
 * include standard lib
 * and custom main.h file
 */
#include<stdlib.h>
#include "main.h"
/**
 *malloc_checked - asigns memory using malloc
 *@b: required int size of the memory to allocate
 *Return: void pointer of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *digits;

	digits = malloc(b);
	if (digits == NULL)
	{
		exit(98);
	}
	return (digits);
}
