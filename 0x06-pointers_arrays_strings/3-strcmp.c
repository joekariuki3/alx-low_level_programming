/*
 * include our header
 */
#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: first string required
 * @s2: second string required
 *
 * Return: 0 if equal
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((*s1 < *s2) ? -1 : 1);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return ((*s1 < *s2) ? -1 : 1);
	}
}
