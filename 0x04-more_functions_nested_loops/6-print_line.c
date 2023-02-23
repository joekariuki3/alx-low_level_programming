#include"main.h"

/**
 * print_line - print _ n times
 * @n: required int
 * Return: Nothing
 */
void print_line(int n)
{
	char symbol = '_';
	int line = 1;

	while (line <= n)
	{
		if (n < line)
		{
			_putchar('\n');
		}
		_putchar(symbol);
		line++;
	}
	_putchar('\n');
	return (0);
}
