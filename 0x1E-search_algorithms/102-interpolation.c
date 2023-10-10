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

	if (!array || !size || !value)
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
		printStringB(pos, array, (int)size);
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
	printStringB((int)pos, array, (int)size);
	return (-1);
}
/**
 * printStringB - print the string
 * @num: index in the array
 * @array: pointer to the first element of array
 * @size: number of elements in the array
 */
void printStringB(int num, int *array, int size)
{
	char string[256] = "Value checked array\n";
	char stringB[256] = "is out of range\n";
	int j = 0;

	for (j = 0; string[j] != '\n'; j++)
		putchar(string[j]);
	putchar('[');
	printInteger(num);
	putchar(']');
	putchar(' ');
	if (num <= size - 1)
	{
		putchar('=');
		putchar(' ');
		putchar('[');
		printInteger(array[num]);
		putchar(']');
	}
	for (j = 0; stringB[j] != '\n'; j++)
		putchar(stringB[j]);
	putchar('\n');
}
/**
 * printInteger - prints number value
 * @num: value to be printed
 * Return: number to be printed
 */
void printInteger(int num)
{
	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num / 10 != 0)
		printInteger(num / 10);
	putchar(num % 10 + '0');
}
