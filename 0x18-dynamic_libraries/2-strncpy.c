/*
 * include our own header file
 */
#include "main.h"

/**
 * *_strncpy - copy one string to another string
 * @dest: where the other string will be copied to
 * @src: the string that will be copied to dest
 *@n: copy sting up to n value
 *
 * Return: a ponter with copied sting
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest; /* save a copy of the original destination pointer */
	int i = 0;

	/* copy the source string to the destination string, up to n bytes */
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	/*
	 * if we haven't reached n bytes yet,
	 * fill the remaining bytes with null characters
	 */
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (result); /*return the original destination pointer*/
}
