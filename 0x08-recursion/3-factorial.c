#include "holberton.h"

/**
 * factorial - fins factorial given number
 * @n: number given
 * Return: -1 if is lower than 0
 * Factorial of 0 is 1
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
