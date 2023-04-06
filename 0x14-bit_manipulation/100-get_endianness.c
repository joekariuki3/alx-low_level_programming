#include"main.h"

/**
 * get_endianness - checks endianness of system by creating
 * 4-byte in j with value of 1 
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int j = 1;
	char *a = (char *)&j;

	if (*a)
		return (1);
	return (0);
}
