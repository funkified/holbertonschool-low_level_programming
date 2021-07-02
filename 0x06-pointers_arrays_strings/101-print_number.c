#include "holberton.h"

/**
 * print_number - prints an interger
 * @n: variable for testing intergers
 * Return: nothing
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
		_putchar(45);
	}
	else
	{
		i = n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + 48);
}
