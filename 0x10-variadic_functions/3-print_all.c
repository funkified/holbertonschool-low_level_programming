#include "variadic_functions.h"

/**
 * print_char - print a character
 * @args: arguments
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_string - prints a string
 * @args: arguments
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_float - prints a inter of type double
 * @args: arguments
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_int - prints interger
 * @args: arguments
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_all - print anything
 * @format: list of types of arguments ot passed funcion
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *space = "";

	va_list args;

	fname_t func[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (func[j].opsym != NULL)
		{
			if (*(func[j].opsym) == format[i])
			{
				printf("%s", space);
				func[j].f(args);
				space = ", ";
			}
			j++;
		}
		i++;
	}
	putchar('\n');
}
