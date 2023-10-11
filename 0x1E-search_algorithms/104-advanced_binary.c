#include"search_algos.h"

/**
 * advanced_binary - search for an element in an array using recussion
 * @array: pointer to the first element of an array
 * @size: number of elements in the array
 * @value: integer to search in the array
 * Return: index of the value in array or -1 if value is missing
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t lowwer = 0, upper = size - 1, middle = 0;

	if (array == NULL || size <= 0)
		return (-1);
	if (lowwer > upper)
		return (-1);
	printArray(array, size);
	middle = upper / 2;

	if (value == array[middle])
		return (middle);
	if (value < array[middle])
	{
		upper = middle;
		advanced_binary(&array[lowwer], upper - lowwer, value);
	}
	if (value > array[middle])
	{
		lowwer = middle;
		advanced_binary(&array[lowwer + 1], upper - lowwer, value);
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

	printf("Searching in array: ");
	for (i = 0; i < newSize; i++)
	{
		printf("%d", array[i]);
		if (i < newSize - 1)
			printf(", ");
	}
	putchar('\n');
}
