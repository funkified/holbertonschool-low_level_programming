#include "holberton.h"

/**
 * puts_half - prints half string
 * @s: string to print
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= 5 && i <= 9)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
