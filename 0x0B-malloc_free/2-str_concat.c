#include "holberton.h"

/**
 * str_concat - concatanate two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: NULL if passed
 */

char *str_concat(char *s1, char *s2)
{
	int len;
	int len2;
	int i;
	char *ptr;

	if (*s1 == 0)
	{
		printf(" ");
		return (NULL);
	}
	
	if (*s1 == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * (_strlen(s1) + (_strlen(s2) + 1)));

	for (len = 0; s1[len] != '\0'; len++)
	{
		ptr[i] = s1[len];
		i++;
	}

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		ptr[i] = s2[len2];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * _strlen - count the lenght of a string
 * @s: string to measure
 * Return: Lenght of stirng
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
