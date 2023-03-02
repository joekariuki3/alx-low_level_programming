#include "main.h"

/**
 * leet - encodes a string
 * @str: requires a character
 * Return: a char
 */
char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "44330771";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (str);
}
