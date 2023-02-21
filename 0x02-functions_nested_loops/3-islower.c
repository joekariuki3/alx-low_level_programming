#include"main.h"

/**
 * print_alphabet - is alphabet lowercase?
 *
 * Return: 1 sucess
 */
int _islower(int c)
{
	char start = 'a';

	while (start <= 'z')
	{
		if (c==start)
		{
			return (1);
		}
		start++;
	}
	return (0);
}
