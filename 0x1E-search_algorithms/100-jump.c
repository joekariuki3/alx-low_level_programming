#include"search_algos.h"

/**
 * jump_search - search for a value in an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the integer to search in the array
 * Return: index of the value or -1 for failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size), upper = 0, lowwer = 0, oversize = 0;

	if (array == NULL || size == 0)
		return (-1);
	if (size == 1 && array[size - 1] == value)
		return (size - 1);
	else if (size == 1 && array[size - 1] != value)
		return (-1);
	lowwer = 0;
	upper = jump;
	for (i = lowwer; i <= size; i = i + jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value <= array[upper])
			break;
		if (value > array[upper])
		{
			lowwer = upper;
			upper = upper + jump;
		}
		if (upper > size)
		{
			oversize = upper;
			upper = size - 1;
		}
	}
	oversize = oversize > size ? oversize : upper;
	printf("Value found between indexes [%ld] and [%ld]\n", lowwer, oversize);
	for (i = lowwer; i <= upper; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
