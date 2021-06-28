#include "holberton.h"

/**
 * swap_int - swap the value of two intergers
 * @a: first parameter
 * @b: second parameter
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
