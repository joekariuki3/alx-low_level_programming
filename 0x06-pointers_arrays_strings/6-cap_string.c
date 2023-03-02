#include "main.h"

/**
 * cap_string - capitalize string
 * @str: requires a character
 * Return: a char
 */
char *cap_string(char *str)
{
	int i = 0;
	int is_word_start = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			is_word_start = 1;
		}
		else if (is_word_start)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			is_word_start = 0;
		}
		i++;
	}
	return (str);
}
