#include"main.h"

/**
 * print_sign - print sign of a number
 *
 *@c: is requred as input
 *
 * Return: 1 sucess
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
