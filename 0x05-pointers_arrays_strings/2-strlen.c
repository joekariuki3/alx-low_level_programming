/*
 * include our own header file
 */
#include"main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: requires s pointer char variablel
 *
 * Return: integer i.e length of a string
 */
int _strlen(char *s)
{
	int i;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
