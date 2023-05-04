#include"main.h"

/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: points to strings of the binary
 * Return: unsigned int that has been converted already
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0')
			uint = uint << 1;
		else if (b[i] == '1')
			uint = (uint << 1) | 1;
		else
			return (0);
		i++;
	}
	return (uint);
}
