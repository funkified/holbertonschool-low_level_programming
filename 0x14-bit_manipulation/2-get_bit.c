#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit
 * @n: value
 * @index: index
 * Return: the value of the but at index or -1 ir failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int p = 1;
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	return ((n >> index) & p);
}
