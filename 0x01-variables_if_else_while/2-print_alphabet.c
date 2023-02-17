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
char letter = 'a';
while (letter <= 'z')
{
	putchar(letter);
	letter++;
}
putchar('\n');
return (0);
}
