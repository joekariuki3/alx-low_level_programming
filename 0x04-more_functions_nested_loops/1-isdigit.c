#include"main.h"

/**
 * _isdigit - checks for number
 *
 * @c: int required
 *
 * Return: 0 always and 1 for digit
 */
int _isdigit(int c)
{
	int start = 0;

	while (start <= 10)
	{
		if (c == start)
		{
			return (1);
		}
		start++;
	}
	return (0);
}
