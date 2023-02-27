/*
 * include our own header file
 */
#include"main.h"

/**
 * _puts - prints string followed with a new line
 *
 * @str: requires s pointer char variablel
 *
 * Return: Nothing
 */
int _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
		_putchar(str[i]);

	}
	_putchar('\n');
}
