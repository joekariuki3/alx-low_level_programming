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
	if (c => 48 && c <= 57)
		{
			return (1);
		}
	return (0);
}
