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
	int i = 0;/* keeps count */

	/* check of loop has reached end of string  */
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		/* compare the two characters of each string  */
		if (s1[i] != s2[i])
		{
			/* returns integer of difference in each char ascii value  */
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

