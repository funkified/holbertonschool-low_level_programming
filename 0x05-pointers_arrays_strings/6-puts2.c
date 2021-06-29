#include "holberton.h"

/**
 * puts2 - print every other charct of a string
 * @str: pointer to string
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
