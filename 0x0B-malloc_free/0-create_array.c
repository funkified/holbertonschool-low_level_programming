#include "holberton.h"

/**
 * create_array - create an array of chars and initializes it with specific chr
 * @size: of the buffer
 * @c: pointer to specific char
 * Return: NULL if size = 0, a pointer to the array, or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;
	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		while(i < size)
		{
			ptr[i] = c;
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
	free (ptr);
}
