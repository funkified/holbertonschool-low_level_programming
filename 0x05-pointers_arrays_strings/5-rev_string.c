#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: points to string to be reverse
 * Return: Nothing
 */

void rev_string(char *s)
{
	int sindex, len = 0;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}
	sindex = 0;
	len--;

	for (; sindex <= len; sindex++)
	{
		temp = s[sindex];
		s[sindex] = s[len];
		s[len] = temp;
		len--;
	}
}
