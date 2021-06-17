#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: points to the string to be evaluated
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i;
	int j;

	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[i] == in[j])
			{
				str[i] = out[j];
				break;
			}
		}
	}
	return (str);
}
