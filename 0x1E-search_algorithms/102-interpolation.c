#include"search_algos.h"

/**
 * interpolation_search - searches for a value in array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the integer to look for in the array
 * Return: position of the value in array or -1 if its not there
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;

	if (array == NULL  || size == 0)
		return (-1);
	if (size == 1 && array[size - 1] == value)
		return (size - 1);
	else if (size == 1 && array[size - 1] != value)
		return (-1);
	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	while (value >= array[low] && value <= array[high] && low <= high)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (pos <= size - 1)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
			printf("Value checked array[%ld] is out of range\n", pos);
		if (value == array[pos])
			return (pos);
		if (value < array[pos])
			high = pos;
		else if (value > array[pos])
		{
			high = size - 1;
			low = pos;
		}
	}
	if (pos <= size - 1)
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	else
		printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
