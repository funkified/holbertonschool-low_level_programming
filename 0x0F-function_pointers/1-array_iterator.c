#include "function_pointers.h"

/**
 * array_iterator - executes a functino given as aparameter on each element
 * @array: array pointer
 * @size: array size
 * @action: pointer to the functino to use
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || action == 0)
		return;
	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}

