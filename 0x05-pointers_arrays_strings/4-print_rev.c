/*
 * include our own header file
 */
#include"main.h"

/**
 *print_rev - print a sting in revers
 *
 * @s: requires s pointer char variablel
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
