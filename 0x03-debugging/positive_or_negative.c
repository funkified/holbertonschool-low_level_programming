#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints if random number is zero
 *
 * Return: zero if success(0)
 */

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes here */
		printf("%d ", n);
		if (n == 0)
			puts("is zero");
		else if (n > 0)
			puts("is positive");
		else
			puts("is negative");
		return (0);
}
