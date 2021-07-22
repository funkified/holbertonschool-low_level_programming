#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array: pointe rto array
 * @size: number of elements of the array
 * @cmp: pointer to the function to nbe used to campare values
 * Return: index of the first element for chich cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
		if (cmp(array[index]))
		{
			return (index);
		}
	return (-1);
}
