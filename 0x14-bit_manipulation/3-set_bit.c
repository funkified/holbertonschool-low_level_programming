#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: bits to set
 * @index: given index
 * Return: 1 if it worked ,or -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 32)
		return (-1);

	i = 1 << index;
	*n = *n | i;
	return (1);
}
