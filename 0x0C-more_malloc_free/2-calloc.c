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
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = 0;
	}
	return (array);
}
