/*
 * include our own header file
 */
#include"main.h"

/**
 *rev_string - print a sting in revers
 *
 * @s: requires s pointer char variablel
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		s[i + 1] = s[i];
	}
	*s = s;
}
