/*
 * include standard lib
 * and custom header
 */
#include<stdlib.h>
#include"main.h"

/**
 *str_concat - takes two strings and put them together
 *@s1: first string
 *@s2: second string
 *Return: char poiter to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *fstr;
	int size1, size2, size3, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	size3 = size1 + size2;
	fstr = malloc(size3 * sizeof(char) + 1);
	if (fstr == NULL)
	{
		return (NULL);
	}
	else
	{
		if (s1 != NULL || s2 != NULL)
		{
			for (i = 0, j = 0; i < size3; i++)
			{
				if (i < size1)
				{
					fstr[i] = s1[i];
				}
				else
				{
					fstr[i] = s2[j++];
				}
			}
			fstr[i + 1] = '\0';
			return (fstr);
		}
		else
		{
			return (NULL);
		}
	}
}
