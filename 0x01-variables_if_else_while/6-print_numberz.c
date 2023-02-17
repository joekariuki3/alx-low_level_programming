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
int base_ten;
for (base_ten = 0; base_ten < 10; base_ten++)
{
	putchar(base_ten + '0');
}
putchar('\n');
return (0);
}
