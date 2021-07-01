#include "holberton.h"

/**
 * _strncat - concatenates 2 string
 * @dest: string destination
 * @src: string source
 * @n: bytes to count
 * Return: a pointer to the resulting string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dlen;

	for (dlen = 0; dest[dlen] != '\0'; dlen++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dlen + i] = src[i];
	}
	dest[dlen + i] = '\0';

	return (dest);
}
