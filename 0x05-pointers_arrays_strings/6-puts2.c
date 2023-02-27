/*
 * include our own header file
 */
#include"main.h"

/**
 * puts2 - prints every other string followed with a new line
 *
 * @str: requires s pointer char variablel
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i = i + 2;

	}
	_putchar('\n');
}
