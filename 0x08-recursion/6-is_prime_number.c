#include "holberton.h"

/**
 * is_prime_number - returns prime number
 * @n: input interger
 * Return: 1 if the input is prime, 0 otherwise
 */


int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, i));
}

/**
 * prime_check - check whether a number is prime or not
 * @n: input
 * @i: will interate to get prime
 * Return: -1 if n is less than i
 */

int prime_check(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i > n / 2)
	{
		return (1);
	}
	return (prime_check(n, i + 1));
}
