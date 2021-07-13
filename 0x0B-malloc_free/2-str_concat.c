#include "holberton.h"

/**
 * str_concat - concatanate two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: NULL if passed
 */

char *str_concat(char *s1, char *s2)
{
	int len = 0;
	int len2;
	char *dest;

	while(s1[len] != '\0')
	{
		len++;
	}

	dest = malloc(sizeof(*s1) * len);

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		dest[len + len2] = s2[len2];
		{
			if (dest == NULL)
			{
				return (NULL);
			}
		}
		dest++;
	}
	return (s1);

}
