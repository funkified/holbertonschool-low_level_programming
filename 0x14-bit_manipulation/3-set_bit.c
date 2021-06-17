#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer
 * @index: index
 * Return: 1 if it worked, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 32)
		return (-1);

	i = i << index;
	*n = *n | i;

	return (1);
}
