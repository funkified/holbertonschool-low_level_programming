#include "holberton.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: ponter to the memory previosly allocates with a callo to malloc
 * @old_size: size in memory pointed by pointer
 * @new_size: the new size in bytes of the new memory block
 * Return: pointer with new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem, *p;
	unsigned int limit;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		if (ptr != NULL)
		{
			free(ptr);
		}
		return (NULL);
	}
	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);
	limit = old_size;
	if (new_size < old_size)
		limit = new_size;

	p = ptr;
	while (limit--)
		mem[limit] = p[limit];

	free(ptr);
	return (mem);
}
