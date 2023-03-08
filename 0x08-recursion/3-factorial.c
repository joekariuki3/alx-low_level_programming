/*
 * include our header file
 */
#include"main.h"

/**
 *factorial - calculates facrorial of a number
 *@n: integer to calculate its factorial
 *Return: int factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
