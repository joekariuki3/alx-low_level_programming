/*
 * include main header
 */
#include"main.h"
/**
 *_sqrt_recursion_helper - helps out in the calculation of sqr
 * @n: int to give its sqrt
 * @low: required
 * @high: required
 * Return: int
 */
int _sqrt_recursion_helper(int n, int low, int high)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (low > high)
	{
		return (-1);
	}
	int mid = low + (high - low) / 2;

	if (mid == n / mid && n % mid == 0)
	{
		return (mid);
	}
	else if (mid < n / mid)
	{
		return (_sqrt_recursion_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_recursion_helper(n, low, mid - 1));
	}
}
/**
 * _sqrt_recursion - calculates sqroot of a number
 * @n: requred int to ge its sqroot
 * Return: int the sqroot of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 0, n));
}

