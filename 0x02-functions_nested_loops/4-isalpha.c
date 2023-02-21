#include"main.h"

/**
 * _isalpha - is alphabet?
 *
 *@c: is requred as input
 *
 * Return: 1 sucess
 */
int _isalpha(int c)
{
	char start = 'a', upper = 'A';

	while (start <= 'z' && upper <= 'Z')
	{
		if (c == start && c == upper)
		{
			return (1);
		}
		start++;
	}
	return (0);
}
