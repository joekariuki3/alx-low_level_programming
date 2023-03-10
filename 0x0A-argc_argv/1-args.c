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
	if (argc >= 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}
