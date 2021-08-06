#include "holberton.h"

/**
 * print_binary - funciton that prints the binary representation of a number
 *@n: points to number
 */

void print_binary(unsigned long int n)
{
	unsigned int i;

	for (i = 1 << 31; i > 0; i <<= 2)
	{
		if (i != 0 && n == 0)
		{
			_putchar('0');
		}
		else if (i == 0 || n == 1)
		{
			_putchar('1');
		}
		else
		{
			print_binary(n >> 1);
			_putchar((n & 1) + '0');
		}
	}
}

