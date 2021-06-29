#include "holberton.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */


void print_array(int *a, int n)
{
	int i;

	n--;

	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
