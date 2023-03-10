/*include standard libs*/
#include<stdio.h>

/**
 * main -  prints its name
 * @argc: size of argv
 * @argv: array containing arguments passed on comandline
 *
 * Return: 0 for sucess
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
