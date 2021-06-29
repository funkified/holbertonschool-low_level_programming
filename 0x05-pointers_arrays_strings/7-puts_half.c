#include "holberton.h"

/**
 * puts_half - prints half string
 * @str: string to print
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	i += 1;

	for (j = (i / 2); str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
