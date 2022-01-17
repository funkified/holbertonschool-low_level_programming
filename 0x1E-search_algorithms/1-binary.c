#include "search_algos.h"
/**
 * binary_search - seaches for a value in a sorted array of integers
 * using Binary Search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the indez where value is located
 * if the value is not present in array or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	left = 0;
	right = size - 1;
	mid = 0;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		if (array[mid] > value)
			right = mid - 1;
	}
	return (-1);
}
