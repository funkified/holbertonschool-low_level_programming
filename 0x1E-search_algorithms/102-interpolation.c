#include "search_algos.h"

/**
 * interpolation_search - search for a value using interpolation search algorim
 * @array: pointer to the array
 * @size: number of elementes
 * @value: value to search for
 * Return: the first index where value is located, else reutnr -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i;
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])
				) * (value - array[low]));

	if (!array || high > size)
		return (-1);

	for (i = 0; array[high] != array[low] && value >= array[low]
			&& value <= array[high]; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		if (value > array[pos])
			high = pos - 1;
		low = pos + 1;
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (value == array[low])
			return (low);
		/*	printf("Value checked array[%lu] = [%d]\n", low, array[low]);*/
	}
	if (value > array[high])
		printf("Value checked array[%d] is out of range\n", array[size]);
	return (-1);
}
