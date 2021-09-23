#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string destination
 * @src: string source
 * Return: destinated string
 */

char *_strcat(char *dest, char *src)
{
	int dlen;
	int slen;

	for (dlen = 0; dest[dlen] != '\0'; dlen++)
		;

	for (slen = 0; src[slen] != '\0'; slen++)
	{
		dest[dlen + slen] = src[slen];
	}
	dest[dlen + slen] = '\0';

	return (dest);
}

