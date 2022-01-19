#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for the value of
 * a sorted array using jump search algorithm
 * @array: poinetr to the array to search in
 * @size: nu,ber of element in the array
 * @value: is the value to search for
 * Return: the first indez where value is located, if value is not present or
 * if array is NULL, return -1
 */

int jump_search(int *array, size_t size, int value)
{
		size_t i, j, step;

		step = (size_t)sqrt(size);

		if (array == NULL)
			return (-1);

		for (i = 0; i < size; i += step)
		{
			if (array[i] >= value)
				break;
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}

		i -= (i > 0 ? step : 0);
		printf("Value found between indexes [%lu] and [%lu]\n",
				i, i + step);

		for (j = i; j <= min(size - 1, i + step) &&
				array[min(step, j) - 1] < value; j++)
		{
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			if (array[j] == value)
				return (j);
		}
		return (-1);
}
