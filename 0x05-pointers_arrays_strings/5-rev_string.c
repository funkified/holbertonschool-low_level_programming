#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: points to string to be reverse
 * Return: Nothing
 */

void rev_string(char *s)
{
	int sindex, rIndex, i = 0;
	char strcpy;

	while (s[i])
	{
		i++;
	}

	for (rIndex = (i - 1); rIndex >= sindex; rIndex--)
	{
		strcpy = s[sindex];
		s[sindex] = s[rIndex];
		s[rIndex] = strcpy;
		sindex++;
	}
}
