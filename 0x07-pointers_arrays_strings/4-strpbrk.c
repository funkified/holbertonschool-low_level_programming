#include "holberton.h"

/**
 * _strpbrk - locates the first occurrence int the string s of any of the bytes
 * @s: first string
 * @accept: 2nd string
 * Return: a pointer to the bute in s that matches one of the butes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int len1, len2, i, j;

	for (len1 = 0; s[len1] != '\0'; len1++)
	{
		for (len2 = 0; accept[len2] != '\0'; len2++)
		{
			for (i = 0; i < len1; i++)
			{
				for (j = 0; j < len2; j++)
				{
					if (s[i] == accept[j])
					{
						return (s + i);
					}
				}
			}
		}
	}
	return (NULL);
}
