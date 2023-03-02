/*
 * include our header file
 */
#include "main.h"

/**
 * reverse_array - prints array from back to front
 * @a: a is the array and is required
 * @n: is the length of the array
 *
 * Return nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
