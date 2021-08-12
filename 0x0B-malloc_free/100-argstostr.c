#include "holberton.h"

/**
 * argstostr - concanates all arguments of your program
 * @ac: arguments count
 * @av: argument vector
 * Return: pointer to new  string
 */

char *argstostr(int ac, char **av)
{
	int len = ac;
	int i, ii, idx = 0;
	char *m;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (ii = 0; av[i][ii] != '\0'; ii++, len++)
			;

	m = malloc(sizeof(char) * len + 1);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, idx++)
	{
		for (ii = 0; av[i][ii] != '\0'; ii++, idx++)
			m[idx] = av[i][ii];
		m[idx] = '\n';
	}
	m[len] = '\0';

	return (m);
}
