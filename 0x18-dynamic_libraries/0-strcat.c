#include "main.h"

/**
 * *_strcat - connects to strings to one
 * @dest: is required
 * @src: is required
 *
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest; /* save a copy of the original destination pointer*/

	/*find the end of the destination string*/
	while (*dest != '\0')
	{
		dest++;
	}
	/*append the source string to the destination string*/
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	/*add the terminating null byte*/
	*dest = '\0';
	return (result); /*return the original destination pointer*/
}
