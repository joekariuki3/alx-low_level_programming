/*
 * include our own header file
 */
#include"main.h"

/**
 *void _print_rev_recursion - prints a string in reverse using recussion
 *
 * @s: string to be printed
 *
 * Returns: Nothing
 */
void _print_rev_recursion(char *s);
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}
