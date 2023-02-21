#include <stdio.h>

/**
  * main - Prints Fibonacci numbers
  *
  * Return: 0
  */
int main(void)
{
	int i, n = 98;
	unsigned int fib1 = 1, fib2 = 2, sum;

	printf("%u, %u", fib1, fib2);
	for (i = 2; i < n; i++)
	{
		sum = fib1 + fib2;
		printf(", %u", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	printf("\n");
	return (0);
}
