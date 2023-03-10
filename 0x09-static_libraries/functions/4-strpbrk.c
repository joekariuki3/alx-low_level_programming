#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in string *s that matches
 * one of the bytes in array of char in *accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *k;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				k = &s[i];
				return (k);
			}
			j++;
		}
		i++;
	}

	return (0);
}
