#include "holberton.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of astring
 * memory of the new string is obtained with malloc and can be freed with free
 * @str: string to be duplicated
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *dup_str;
	char *ptr;
	int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str);
	dup_str = malloc(sizeof(char) * size + 1);
	ptr = dup_str;

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		while (*str)
		{
			*ptr = *str;
			ptr++;
			str++;
		}
	}
	return (dup_str);
	free(dup_str);
}

/**
 * _strlen - gets the lenght of a string
 * @s: string to be measure
 * Return: Lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
