#include "holberton.h"

/**
 * malloc_checked - allocaftes memory using malloc
 * @b: counts elements to allocate
 * Return: if malloc fails function should cause normal processs of termination
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	if (b == 0)
		exit(98);

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
