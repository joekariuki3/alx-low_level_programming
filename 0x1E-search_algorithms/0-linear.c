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
	size_t i = 0, j = 0;
	char string[256] = "Value checked array\n";

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		for (j = 0; string[j] != '\n'; j++)
		{
			putchar(string[j]);
		}
			putchar('[');
			printInteger((int)i);
			putchar(']');
			putchar(' ');
			putchar('=');
			putchar(' ');
			putchar('[');
			printInteger(array[i]);
			putchar(']');
			putchar('\n');
		if (array[i] == value)
			return (i);
	}
	return (-1);
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
