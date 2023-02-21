/*
 * include header files
 */
#include<stdio.h>
#include"main.h"

/**
 * print_alphabet start of function
 * Return: void
 */
void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
/**
 * main - start function
 * Return: 0 sucess
 */
int main(void)
{
	print_alphabet();
	return (0);
}
