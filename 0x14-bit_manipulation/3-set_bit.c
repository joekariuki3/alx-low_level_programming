#include"main.h"

/**
 * set_bit - sets a vaue of a bit an position x to 1
 * @n: poiter to the values to set the bit in
 * @index: position of the value to set the bit
 * Return: -1 for error and 1 for sucess
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= 1 << index;
	return (1);
}
