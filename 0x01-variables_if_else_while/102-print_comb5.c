#include <stdio.h>

/**
 * main - prints all combiniations of two 2-digits numbers
 *
 * Return: always zero
 */

int main(void)
{
	int e1, e2;

	for (e1 = 0; e1 < 100; e1++)
	{
		for (e2 = 0; e2 < 100; e2++)
		{
			if (e1 < e2 && e1 != e2)
			{
				putchar((e1 / 10) + 48);
				putchar((e1 % 10) + 48);
				putchar(' ');
				putchar((e2 / 10) + 48);
				putchar((e2 % 10) + 48);
				if (e1 != 98 || e2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
