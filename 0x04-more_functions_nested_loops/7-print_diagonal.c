#include"main.h"

void print_diagonal(int n);
/**
 * print_diagonal - print \ end of line
 * @n: required int
 * Return: Nothing
 */
void print_diagonal(int n)
{
	char symbol = '\\';
	char space = ' ';
	int line = 1;
	int j;

	for (n = 1; n <= 9; n++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j == n)
			{
				_putchar(symbol);
			}
			else
			{
				_putchar(space);
			}
		}
		_putchar('\n');
	}
}
