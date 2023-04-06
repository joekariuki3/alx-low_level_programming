#include"main.h"

/**
 * print_binary - convert a int to a binary
 * @n: integer to be converted
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
