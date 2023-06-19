#include"main.h"

/**
 * _isupper - checks for uppercase alphabet
 *
 * @c: int required
 *
 * Return: 0 always and 1 for uppercase
 */
int _isupper(int c)
{
	char start = 'A';

	while (start <= 'Z')
	{
		if (c == start)
		{
			return (1);
		}
		start++;
	}
	return (0);
}
