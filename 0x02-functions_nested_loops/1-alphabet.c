#include"main.h"

/**
 * print_alphabet - make the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
