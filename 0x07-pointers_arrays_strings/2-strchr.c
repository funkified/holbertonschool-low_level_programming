#include "holberton.h"

/**
 * _strchr - locates a character i a string
 * @s: pointer to string
 * @c: character count
 * Return: a pointere to the character in string
 */

char *_strchr(char *s, char c)
{

	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
			return (0);
}
