#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: area destination
 * @src: memory src
 * @n: bytes to be copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
