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
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
