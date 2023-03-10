/*include standard libs*/
#include<stdio.h>
#include<stdlib.h>

/**
 * main -  multiplies two numbers
 * @argc: size of argv
 * @argv: array containing arguments passed on comandline
 *
 * Return: 0 for sucess and 1 for error
 */
int main(int argc, char *argv[])
{
	int mult = 1, a, b;

	if (argc > 1 && argc < 3)
	{
		a = atoi(argv[1]);
		mult = a * 1;
		printf("%d\n", mult);
		return (0);
	}
	else if (argc > 1 && argc < 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mult = a * b;
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
