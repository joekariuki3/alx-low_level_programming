#include"main.h"

/**
 *print_most_numbers - prints numbers from 0 to 9 except 2 and 4 using _putchar
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int start = 0;

	while (start <= 10)
	{
		if (start != 2 || start != 4)
		{
			_putchar(start);
		}
	}
	_putchar('\n');
	return (0);
}
