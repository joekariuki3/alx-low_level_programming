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
	int i = 0;
	int answer;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			int alp1 = s1[i];
			int alp2 = s2[i];

			answer = alp1 - alp2;
			break;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (answer);
}
