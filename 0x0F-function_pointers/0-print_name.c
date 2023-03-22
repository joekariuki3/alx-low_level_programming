#include"function_pointers.h"

/**
 * print_name - function to print a name
 * @name: string passed to be printed
 * @f: pointer to a function that prints name
 */
void print_name(char *name, void (*f)(char *c))
{
	f(name);
}
