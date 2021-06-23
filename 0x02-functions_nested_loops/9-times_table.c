#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
	int row;
	int column;
	int mult;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			mult = column * row;
			if (column == 0)
			{
				_putchar('0' + mult);
			}
			else if (mult <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			if (mult > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
