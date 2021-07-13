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

	size = _strlen(str);
	dup_str = malloc(sizeof(char) * size + 1);

	if (dup_str == NULL)
		return (NULL);

	ptr = dup_str;

	while (*str)
	{
		*ptr = *str;
		ptr++;
		str++;
	}
	*ptr = '\0';

	return (dup_str);
	free(dup_str);
}
