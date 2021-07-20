#include "holberton.h"

/**
 * array_range - creater array of interger
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to to newley created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	array = malloc(sizeof(int) * range);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < range; min++, i++)
	{
		array[i] = min;
	}
	return (array);
}
