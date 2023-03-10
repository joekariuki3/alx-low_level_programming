/*include standard libs*/
#include<stdio.h>

/**
 * main -  prints number or arguments passed
 * @argc: size of argv
 * @argv: array containing arguments passed on comandline
 *
 * Return: 0 for sucess
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int count;
	{
		for (count = 0; count < argc; count++)
		{}
		printf("%d\n", argc - 1);
	}
	return (0);
}
