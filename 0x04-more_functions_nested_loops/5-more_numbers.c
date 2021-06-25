#include "holberton.h"

/**
 *more_numbers - prints 10 times the numbers from 0 to 14
 *
 *Return: nothing
 */

void more_numbers(void)
{
	int t;
	int i;

	for (t = 0; t <= 9; t++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
