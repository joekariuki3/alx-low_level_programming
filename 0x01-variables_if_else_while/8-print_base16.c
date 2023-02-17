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
int basesixteen;
for (basesixteen = 0; basesixteen < 10; basesixteen++)
{
	putchar(basesixteen + '0');
}
for (basesixteen = 0; basesixteen < 6; basesixteen++)
{
	putchar(basesixteen + 'a');
}
putchar('\n');
return (0);
}
