#include"function_pointers.h"

/**
 * int_index - function to search for integer
 * @array: array containing the elements
 * @size: number of elements in the array
 * @cmp: pointer to the function that compares the integers in the array
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
