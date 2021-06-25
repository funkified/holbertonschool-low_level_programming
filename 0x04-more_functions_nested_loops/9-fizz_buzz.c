#include <stdio.h>
/**
 *main - Write a program that prints the numbers 1 to 100
 * for the multiples of three and five
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int limit = 100;

	for (i = 1; i <= limit; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		else
		{
			if (i % 3 == 0)
				printf("%s", "Fizz");
			if (i % 5 == 0)
				printf("%s", "Buzz");
		}
		if (i != limit)
			printf(" ");
	}
	printf("\n");

	return (0);
}
