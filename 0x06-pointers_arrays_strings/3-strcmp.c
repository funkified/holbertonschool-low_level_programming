#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0; s1[len] == s2[len]; len++)
	{
		if (s1[len] != '\0' && s2[len] != '\0')
		{
			return (0);
		}
	}
	return (s1[len] - s2[len]);
}
