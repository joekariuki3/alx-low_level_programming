#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
  * print_opcodes - prints opcodes
  * @start: array from argv from main function
  * @n: number of arguments in array argv
  */
void print_opcodes(unsigned char *start, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%02hhx\n", start[i]);
			break;
		}
		printf("%02x ", start[i]);
	}
	printf("\n");
}

/**
 * main - start of main function
 * @argc: number of elements in array argv
 * @argv: array of elements passes
 * Return: int 0 0n sucess
 */
int main(int argc, char *argv[])
{
	int n;

	if (argv == NULL)
	{
		return (0);
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes((unsigned char *)main, n);
	return (0);
}
