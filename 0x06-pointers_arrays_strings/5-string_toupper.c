#include "main.h"

/**
 * string_toupper - change lower to upper
 * @str: requires a character
 * Return: a char
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32; /*convert lowercase to uppercase*/
		}
		i++;
	}
	return (str);
}
