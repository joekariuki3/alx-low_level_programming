#include"search_algos.h"

/**
 * linear_search - search for a value in an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the integer to search in the array
 * Return: index of the value or -1 for failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
