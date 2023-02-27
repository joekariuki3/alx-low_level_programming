/*
 * include our own header file
 */
#include"main.h"

/**
 * swap_int - interchange values of two integers
 *
 * @a: requires a pointer integer variablel
 * @b: requires b pointer integer variablel
 *
 * Returns: nothing(void)
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
