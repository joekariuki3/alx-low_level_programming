#include"search_algos.h"


/**
 * exponential_search - search for a value in an array
 * @array: pointer to the first element of array
 * @size: number of elements in the array
 * @value: the element to look for in the array
 * Return: index if the value of -1 if its not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left = 0, right = 0;
	int binaryResult = 0;

	if (array == NULL || size == 0)
		return (-1);
	if (size == 1 && array[size - 1] == value)
		return (size - 1);
	else if (size == 1 && array[size - 1] != value)
		return (-1);
	if (value == array[0])
		return (0);
	while (i < size && array[i] < value)
	{
		i *= 2;
		if (array[i] < value)
			printString((int)i, array);
	}
	left = i / 2;
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	/*printFound(left, right);*/
	binaryResult = binary_search(&array[left], right - left, value);
	return (binaryResult < 0 ? (int)binaryResult : (binaryResult + (int)left));
}
/**
 * binary_search - search for a value in an array
 * @array: pointer to the first element of array
 * @size: number of elements in the array
 * @value: the element to look for in the array
 * Return: index if the value of -1 if its not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0, mid = 0, newSize = 0;
	int *startElement = NULL;

	if (!array || !size || !value)
		return (-1);
	if (size == 1 && array[size - 1] == value)
		return (size - 1);
	else if (size == 1 && array[size - 1] != value)
		return (-1);
	right = size - 1;

	startElement = array;
	newSize = size;
	printArray(startElement, newSize);

	while (left < right)
	{
		mid = ((left + right) / 2);
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
		{
			right = mid - 1;
			startElement = &array[0];
			newSize = right - left + 1;
			printArray(startElement, newSize);
		}
		else
		{
			left = mid + 1;
			startElement = &array[mid + 1];
			newSize = right - left + 1;
			printArray(startElement, newSize);
		}
	}
	return (-1);
}

/**
 * printArray - prints elements in an array
 * @array: pointer to the first element in the array
 * @newSize: number of elements in the array
 */
void printArray(int *array, size_t newSize)
{
	size_t i = 0;
	char string[256] = "Searching in array:\n";

	for (i = 0; string[i] != '\n'; i++)
		putchar(string[i]);
	putchar(' ');
	for (i = 0; i < newSize; i++)
	{
		printInteger(array[i]);
		if (i < newSize - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
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
