#include <stdio.h>

/**
 * main - counts number of arguments passed
 * @argc: arguments count
 * @argv: vector
 * Return: zero
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
