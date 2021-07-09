#include <stdio.h>

/**
 * main - counts number of arguments passed
 * @argc: arguments count
 * @argv: vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
