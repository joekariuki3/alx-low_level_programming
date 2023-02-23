/*
 * include standard i/o lib
 */
#include<stdio.h>

/**
 * main - start of function print num 1 to 100, fizz multiple 3
 * buzz mulpile 5 n for both fizzbuzz
 *
 * Return: 0 for sucess
 */
int main(void)
{
	int i;

	i= 1;
	while (i <= 100)
	{
		if (i % (3 * 5) == 0)
		{
			printf("FizzBuzz ");
			i++;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			i++
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			i++;
		}
		else
		{
			printf("%d ", i);
			i++;
		}
	}
	printf("\n");
	return (0);
}
