#include"main.h"

/**
 * flip_bits - gets the number of bits
 * to flip in oder to change from number to another
 * @n: one of the number 1st
 * @m: one of the number 2nd
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	int count = 0;

	while (value > 0)
	{
		if ((value & 1) == 1)
			count++;
		value = value >> 1;
	}
	return (count);
}
