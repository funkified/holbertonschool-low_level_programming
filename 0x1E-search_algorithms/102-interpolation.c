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
	size_t low, high, pos;

	low = 0;
	high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos < low || pos > high)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (value < array[pos])
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
		else if (value > array[pos])
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return (pos);
		}
	}
	return (-1);
}
