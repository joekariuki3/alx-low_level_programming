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
		if (*s != '\0')
		{
			_putchar(*s);
			_puts_recusion(s + 1);
		}
		_putchar('\n');
}
