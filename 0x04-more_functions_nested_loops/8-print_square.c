#include"main.h"

/**
 * print_square - prints square size of n(size)
 * @size: int required
 * Return: 0
 */
void print_square(int size)
{
	int l;

	l = 0;
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
	while (l < size)
	{
		int num = 0;

		while (num < size)
		{
			_putchar('#');
			num++;
		}
		l++;
		_putchar('\n');
	}
	}
}
