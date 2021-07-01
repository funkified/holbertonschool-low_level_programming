#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of intergers
 * @a: pointer to arrays
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, len = 0;
	int temp = 0;

	for (i = 0; i != n; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		temp = a[i];
		a[i] = a[len - 1];
		a[len - 1] = temp;
		len--;
	}
}
