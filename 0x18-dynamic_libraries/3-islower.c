#include"main.h"

/**
 * _islower - is alphabet lowercase?
 *
 *@c: is requred as input
 *
 * Return: 1 sucess
 */
int _islower(int c)
{
	char start = 'a';

	while (start <= 'z')
	{
		if (c == start)
		{
			return (1);
		}
		start++;
	}
	return (0);
}
