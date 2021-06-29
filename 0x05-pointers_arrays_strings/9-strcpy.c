#include "holberton.h"

/**
 * _strcpy - copy a string including null byte
 *
 * @dest: buffer pointed to
 * @src: points to string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
