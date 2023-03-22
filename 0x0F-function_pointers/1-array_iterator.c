#include"function_pointers.h"
/**
 * array_iterator - iterates in an array of function and executes a function
 * @array: array containing the functions
 * @size: length of the array containig the functions
 * @action: pointer to the fuction being executed
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
