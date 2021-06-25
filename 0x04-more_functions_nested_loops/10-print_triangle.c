#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: desired size
 * Return: 0
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, sym, spaces;

		for (i = 1; i <= size; i++)
		{
			for (spaces = size - i ; spaces > 0; spaces--)
				_putchar(' ');
			for (sym = i; sym > 0; sym--)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
