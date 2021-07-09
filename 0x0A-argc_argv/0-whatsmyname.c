#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: argument counts
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
