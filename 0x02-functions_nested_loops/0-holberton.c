#include <stdio.h>
#include "holberton.h"

/**
 * main - prints a string followed by new line
 *
 * Return: zero
 */

int main(void)
{
	char str[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
