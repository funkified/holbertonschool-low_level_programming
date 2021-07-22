#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints string using variadic funcitno
 * @separator: string to be printed
 * @n: number of strings passed to
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *ch;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(string, char *);

		if (ch != '\0')
			printf("%s", ch);
		else
			printf("(nil)");
		if (separator != '\0' && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
