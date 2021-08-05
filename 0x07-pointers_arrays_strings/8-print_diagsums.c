#include "holberton.h"
/**
 * print_diagsum - print sum of diagram
 * @a: ppints to first element
 * @size: size to compar
 */
void print_diagsum(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i <= size * size; i += size + 1)
	{
		sum1 += a[i];
	}
	for (j = 0; j < size * size - 1; j += size - 1)
	{
		sum2 += a[j];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
