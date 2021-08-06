#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: interger
 * @m: 2nd ints
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, j = 0;
	unsigned long int ii = sizeof(unsigned long int) * 8;

	for (i = 0; i < ii; i++)
	{
		if ((m & 1) != (n & 1))
		{
			j += 1;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (j);
}
