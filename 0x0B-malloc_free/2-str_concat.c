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
		for (i = 0; i < size1; i++)
		{
			fstr[i] = s1[i];
		}
		i++;
		for (j = 0; j < size3; j++)
		{
			fstr[i + j] = s2[j];
		}
		fstr[j + 1] = '\0';
		return (fstr);
	}
}
