#include "holberton.h"

/**
 * _memset - fill the first n bytes of the memory area pointed to by b
 *
 * @s: points to byte
 * @b: constant byte
 * @n: bytes to be fill
 * Return: ponter to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
