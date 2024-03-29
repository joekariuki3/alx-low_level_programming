#include"main.h"

/**
 * get_bit - gets a bit from a specific index
 * @n: where the bit will be checked in
 * @index: the position the bit to get
 * Return: bit of the value at index or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
