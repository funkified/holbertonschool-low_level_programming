#include "main.h"

/**
 * clear_bit - sets the value a bit to 0 at given index
 * @index: index starting at 0
 * @n: pointer to bit
 * Return: 1 if it worked, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 32)
	{
		return (-1);
	}
	i = ~1 << index;
	*n = *n & i;
	return (1);
}
