#include "holberton.h"
#include <math.h>
/**
 * binary_to_uint - function thtat convert a binarynumber to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: int num, or 0 if 1 or more char in the string b thats not 0 or 1
 * or NUll is b
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		while (*b)
		{
			if (*b == '1')
			{
				i = ((i * 2) + 1);
			}
			else if (*b == '0')
			{
				i = ((i * 2));
			}
			else
			{
				return (0);
			}
			b++;
		}
	}
	return (i);
}
