/*
 * include our header file
 */
#include"main.h"

/**
 *_pow_recursion - performs calculation of power of a numbre
 *@x: int to perform the power to
 *@y: int that is the power
 *Return: int power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
