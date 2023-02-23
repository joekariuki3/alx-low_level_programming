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

	i = 1;
	while (i <= 100)
	{
		if (i % (3 * 5) == 0)
		{
			printf("FizzBuzz%c", 32);
			i++;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz%c", 32);
			i++;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz%c", 32);
			i++;
		}
		else
		{
			printf("%d%c", i, 32);
			i++;
		}
	}
	printf("\n");
	return (0);
}
