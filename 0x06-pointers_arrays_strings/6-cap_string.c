#include "holberton.h"

/**
 * cap_string - capitalize all first character of every word
 * @s: pointer to string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i;
	int j;
	char sp_chr[] = {'\"', ' ', '?', '!', '\n', '\t', '(', ')', '.',
		'*', '+', '#', '%'};
	i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; sp_chr[j] != '\0'; j++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				if (s[i - 1] == sp_chr[j])
				{
					if (s[i] >= 'a' && s[i] <= 'z')
					{
						s[i] = s[i] - 32;
					}
				}
				else if (s[i] >= 'A' && s[i] <= 'Z')
					s[i] = s[i] + 32;
			}
		}
	}
	return (s);
}
