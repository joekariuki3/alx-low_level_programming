/*
 * include our own header file
 */
#include"main.h"

/**
 * _puts_recursion - prints a string using recussion
 *
 * @s: string to be printed
 *
 * Returns: Nothing
 */
void _puts_recursion(char *s)
{
		int i = 0;

		if (*s != '\0')
		{
			_putchar(s[i]);
			i++;
			_puts_recursion(s + 1);
		}
		_putchar('\n');
}
