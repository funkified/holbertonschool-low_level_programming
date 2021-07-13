#include "holberton.h"

/**
 * str_concat - concatanate two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: NULL if passed
 */

char *str_concat(char *s1, char *s2)
{
	int len, len2, size;
	int index;
	int jindex;
	char *ptr;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (index = 0; s1[index] != '\0'; index++)
	{
	}
	for (jindex = 0; s2[jindex] != '\0'; jindex++)
	{
		;
	}

	size = index + jindex + 1;
	ptr = malloc(sizeof(char) * size);

	if (ptr == 0)
	{
		return (NULL);
	}
	for (len = 0; len < index; len++)
	{
		ptr[len] = s1[len];
	}

	for (len2 = 0; len2 < jindex; len++, len2++)
	{
		ptr[len] = s2[len2];
	}
	ptr[index + jindex] = '\0';
	return (ptr);
}
