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
		printString((int)i, array);
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
	printFound(lowwer, oversize > size ? oversize : upper);
	for (i = lowwer; i <= upper; i++)
	{
		printString((int)i, array);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
/**
 * printFound - print the string
 * @lowwer: start of subarray
 * @upper: end of sub array
 */
void printFound(size_t lowwer, size_t upper)
{
	char string[256] = "Value found between indexes\n";
	int j = 0;

	for (j = 0; string[j] != '\n'; j++)
		putchar(string[j]);
	putchar(' ');
	putchar('[');
	printInteger((int)lowwer);
	putchar(']');
	putchar(' ');
	putchar('a');
	putchar('n');
	putchar('d');
	putchar(' ');
	putchar('[');
	printInteger((int)upper);
	putchar(']');
	putchar('\n');
}
/**
 * printString - print the string
 * @num: index in the array
 * @array: pointer to the first element of aray
 */
void printString(int num, int *array)
{
	char string[256] = "Value checked array\n";
	int j = 0;

	for (j = 0; string[j] != '\n'; j++)
		putchar(string[j]);
	putchar('[');
	printInteger(num);
	putchar(']');
	putchar(' ');
	putchar('=');
	putchar(' ');
	putchar('[');
	printInteger(array[num]);
	putchar(']');
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
