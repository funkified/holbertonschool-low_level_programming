#include "holberton.h"

/**
 * _calloc - allocates memry for an array using malloc
 * @nmemb: elements of array
 * @size: size of element in array
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i, buffer = 0;

	if (nmemb == 0)
		return (0);
	if (size == 0)
		return (0);

	buffer = nmemb * size;
	array = malloc(buffer);

	if (buffer == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		array[i] = 0;
	}
	return (array);
}
