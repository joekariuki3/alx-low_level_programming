#include"main.h"

/**
 *print_last_digit - print last digit of a number
 *
 *@i: is requred as input
 *
 * Return: 0 sucess
 */
int print_last_digit(int i)
{
	int lastdigit;

	lastdigit = i % 10;
	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}

	_putchar(lastdigit + '0');
	return (lastdigit);
}
