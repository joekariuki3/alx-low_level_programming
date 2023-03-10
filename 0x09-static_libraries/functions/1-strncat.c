#include "main.h"

/**
 * *_strncat - connects to strings to one
 * @dest: is required
 * @src: is required
 * @n: is requred
 *
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *result = dest; /* save a copy of the original destination pointer*/

	/*find the end of the destination string*/
	while (*dest != '\0')
	{
		dest++;
	}
	/*append the source string to the destination string, up to n bytes*/
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	/*add the terminating null byte*/
	*dest = '\0';
	return (result); /*return the original destination pointer*/
}
