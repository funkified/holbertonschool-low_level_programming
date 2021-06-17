#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer
 * @index: index
 * Return: 1 if it worked 0 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (n == NULL || index > 32)
		return (-1);

	i = i << index;

	if ((i & *n) == i)
	{
		*n -= i;
	}
	return (1);
}
