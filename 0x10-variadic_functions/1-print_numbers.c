#include"variadic_functions.h"

/**
 * print_numbers - prints number arguments passed
 * @separator: reparater to u sed betwen the numbers
 * @n: number of arguments passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
