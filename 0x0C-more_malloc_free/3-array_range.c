/*
 * include stdlib
 * and main header
 */
#include<stdlib.h>
#include"main.h"

/**
 * array_range - creates an array and asigns values to it
 * @min: smallest value to start with
 * @max: maximum value and last value in the array
 * Return: int poiter to the created array
 */
int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}
	else
	{
		int *nums;
		int i, size;

		size = ((max - min) + 1);
		nums = malloc(size * sizeof(int));
		if (nums == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				nums[i] = min;
				min++;
			}
			return (nums);
		}

	}
}
