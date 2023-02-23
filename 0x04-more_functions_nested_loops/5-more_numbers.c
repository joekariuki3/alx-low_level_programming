#include"main.h"

/**
 *more_numbers - prints numbers from 0 to 14 followed with new line 10 times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int l,n;
	
	l = 0;
	n = 0;
	while (l <= 10)
	{
		while (n <= 14)
		{
			_putchar(n + '0');
			n++;
		}
		l++;
		_putchar('\n');
	}
	_putchar('\n');
}
