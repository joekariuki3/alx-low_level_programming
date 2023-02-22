/*
 * include our own header file
 */
#include"main.h"

/**
 * main - test for positive or negative
 *
 * Return: 0 for succes
 */
int main(void)
{
	int i = 0;

	positive_or_negative(i);
	if (i == 0)
	{
		printf("%d, is zero", i);
	}
	return (0);
}
