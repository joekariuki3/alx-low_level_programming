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
char upper_case = 'A';
char lower_case = 'a';
while (lower_case <= 'z')
{
	putchar(lower_case);
	lower_case++;
}
while (upper_case <= 'Z')
{
	putchar(upper_case);
	upper_case++;
}
putchar('\n');
return (0);
}
