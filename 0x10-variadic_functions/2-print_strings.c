#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_strings - functiion that prints a string
 *@separator: is the string to be printed between the strings
 *@n: is the number of string passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *holder;

	if (separator == NULL)
		separator = "";

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		holder = va_arg(list, char *);
		printf("%s", holder == NULL ? "(nil)" : holder);
		if (i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");

}
