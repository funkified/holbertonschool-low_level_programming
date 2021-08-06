#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: bit to be value
 * @index:given index
 * Return: the value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int p;

	if (index > 32)
		return (-1);

	p = n >> index;
	return (p & 1);
}
