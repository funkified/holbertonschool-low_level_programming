#include "holberton.h"

/**
 * string_nconcat - concanates two strings
 * @s1: first string space in memory
 * @s2: second string
 * @n: byte to concat
 * Return: new allocated space n memory which contains s1 followed by s2 n Byte
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, sum = 0;
	char *tmp;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n > len2)
		n = len2;
	sum = len1 + n;

	tmp = malloc(sizeof(char) * sum + 1);
	if (tmp == 0)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		tmp[i] = s1[i];
	}
	for (len2 = 0; s2[len2] != '\0' && len2 < n; i++, len2++)
	{
		if (n > len2)
		{
			tmp[i] = s2[len2];
		}
	}
	tmp[i] = '\0';
	return (tmp);
}
