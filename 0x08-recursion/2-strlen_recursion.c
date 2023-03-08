/*
 * include our own header file
 */
#include"main.h"

/**
 *_strlen_recursion - returns length of a string
 *
 * @s: string to be measeured
 *
 * Return: int length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		return (int i++);
	}
	else
		return (0);
}

