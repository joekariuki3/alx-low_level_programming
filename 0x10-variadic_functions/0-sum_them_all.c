#include"variadic_functions.h"

/**
 * sum_them_all - sums all the arguments
 * @n: number of arguments passed
 * Return: sum for sucess and 0 if arguments == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		unsigned int i, sum;
		va_list digits;

		sum = 0;
		va_start(digits, n);
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(digits, unsigned int);
		}
		va_end(digits);
		return (sum);
	}
}
