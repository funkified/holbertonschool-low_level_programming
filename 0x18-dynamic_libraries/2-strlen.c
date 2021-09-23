#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: points to string to be measure
 * Return: number of chars of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
