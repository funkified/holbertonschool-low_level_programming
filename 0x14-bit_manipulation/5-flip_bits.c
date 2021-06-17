#include "holberton.h"
/**
 * flip_bits - return the # of bits you need to flip to get from one to another
 * @n: pointer
 * @m: bit to flip
 * Return: number of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, y = 0;
	unsigned long int ii = sizeof(unsigned long int) * 8;

	for (i = 0; i < ii; i++)
	{
		if ((m & 1) != (n & 1))
			y += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (y);
}
