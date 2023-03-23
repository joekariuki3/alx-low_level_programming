#include"variadic_functions.h"

/**
 * print_all function is designed to print various
 * types of data based on the provided format string.
 * The function accepts a format string and a variable number of arguments.
 * @format: string consists of characters that
 * represent the type of data to be printed:
 * - 'c' for char
 * - 'i' for integer
 * - 'f' for float
 * - 's' for string (char *)
 * Any other character is ignored.
 *
 * If the string (char *) is NULL, it will print (nil) instead.
 * At the end of the function, a new line is printed.
 *
 * The function is limited to:
 * - 2 while loops
 * - 2 if statements
 * - 9 variable declarations
 * - Using printf function for printing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	int integer;
	float flt;
	char *str;
	int first_print = 1;

	/* Initialize the variable argument list */
	va_start(args, format);
	/* Process each character in the format string */
	while (format[i])
	{
		/* Determine the type of data to be printed based on the current character */
		switch (format[i])
		{
			case 'c':
				c = (char)va_arg(args, int);
				if (!first_print)
					printf(", ");
				printf("%c", c);
				first_print = 0;
				break;
			case 'i':
				integer = va_arg(args, int);
				if (!first_print)
					printf(", ");
				printf("%d", integer);
				first_print = 0;
				break;
			case 'f':
				flt = (float)va_arg(args, double);
				if (!first_print)
					printf(", ");
				printf("%f", flt);
				first_print = 0;
				break;
			case 's':
				str = va_arg(args, char *);
				if (!first_print)
					printf(", ");
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				first_print = 0;
				break;
			default:
				break;
		}
		i++;
	}
	/* Print a new line at the end of the function */
	printf("\n");

	/*  Clean up the variable argument list */
	va_end(args);
}
