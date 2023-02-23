#include"main.h"

/**
 *more_numbers - prints numbers from 0 to 14 followed with new line 10 times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int lines = 0;
	int numbers = 0;

	while (lines <= 10)
	{
		while (numbers <= 14)
		{
			_putchar(numbers);
			numbers++;
		}
		line++;
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
