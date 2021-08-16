#include "holberton.h"
#include <stdlib.h>
/**
 * word_count - count words of string
 * @str: sttring to measure
 * Return: pointer to string or NULL if functino fails
 */
int word_count(char *str)
{
	int i = 0, words = 0, flag = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			flag = 1;
		else if (flag)
		{
			words++;
			flag = 0;
		}
	}

	return (words);
}

/**
 * strtow - splits string into words
 * @str: string to be split
 * Return: pointer to array or NULL if fails
 */
char **strtow(char *str)
{
	char **arr = NULL;
	int i, ii, w_idx = 0, wl = 0, wc = 0;

	if (str == NULL || str == '\0')
		return (NULL);
	wc = word_count(str);
	if (wc > 0)
		arr = malloc(sizeof(char *) * (wc + 1));
	arr[wc] = NULL;

	for (i = 0; str[i] != '\0'; wl = 0)
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			wl++;
			i++;
		}
		if (wl > 0)
		{
			arr[w_idx] = malloc(sizeof(char *) * (wl + 1));
			if (arr[w_idx] == NULL)
			{
				while (w_idx > 0)
					free(arr[--w_idx]);
				free(arr);
				return (NULL);
			}
			arr[w_idx][wl] = '\0';
			for (ii = 0; ii < wl; ii++)
				arr[w_idx][ii] = str[i - (wl - ii)];
			w_idx++;
		}
	}

	return (arr);
}
