#include"main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int line = 0;

	while (line <= 10)
	{
		char start = 'a';
		
		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		line++;
	}
}
