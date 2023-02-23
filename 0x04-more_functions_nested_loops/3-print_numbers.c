#include"main.h"

/**
 *print_numbers - prints numbers from 0 to 9 usint _putchar
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int start;

	start = 0;
	while (start < 10)
	{
		_putchar(start + '0');
		start++;
	}
	_putchar('\n');
}
