#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be compared
 * @needle: substring
 * Return: a pointer to the beggining of the substring or NUll otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		while (needle[j] && haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}

