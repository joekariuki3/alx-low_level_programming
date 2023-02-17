/*
 * include required headers
 */

#include<stdio.h>

/**
 * main - start of the program
 * Return: 0 for sucess
*/
int main(void)
{
int base_ten = 0;
while (base_ten < 10)
{
	printf("%d", base_ten);
	base_ten++;
}
putchar('\n');
return (0);
}
