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
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	while (i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
