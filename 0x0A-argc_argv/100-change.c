#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the min of number of coins to make change for amount of money
 * @argc: count size of argv
 * @argv: amount of money
 * Return: 1 if amount of arguments is not 1,
 * 0 if success
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;
	int cValue[5] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			coins += cents / cValue[i];
			cents -= (cents / cValue[i]) * cValue[i];
		}
	}

	printf("%d\n", coins);
	return (0);
}
