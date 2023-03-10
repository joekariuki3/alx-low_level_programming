/*include standard libs*/
#include<stdio.h>

/**
 * main -  prints  arguments passed
 * @argc: size of argv
 * @argv: array containing arguments passed on comandline
 *
 * Return: 0 for sucess
 */
int main(int argc, char *argv[])
{
	int count;
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
