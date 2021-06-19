#include <stdio.h>

/**
 * main - prints all combiniations of two 2-digits numbers
 *
 * Return: always zero
 */

int main(void)
{
	int d1, d2, d3, d4;

	int e1, e2;

	for (d1 = 0; d2 < 10; d3++)
	{
		for (d2 = 0; d3 < 10; d4++)
		{
			for (d3 = 0; d4 < 10; d4++)
			{
				for (d4 = 0; d4 < 10; d4++)
				{
					e1 = d1 * 10 + d2;
					e2 = d3 * 10 + d4;
					if (e1 > e2)
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(' ');
					putchar(d3 + '0');
					putchar(d4 + '0');

					if (!((e1 == 98) && (e2 == 99)))
						putchar(',');
						putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
