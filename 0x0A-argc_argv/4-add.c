#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds 2 number
 * @argc: count
 * @argv: vector
 * Return: results
 */
int main(int argc, char *argv[])
{
	int n1, n2, result = 0, is_int;
	char *str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (n1 = 1; n1 < argc; n1++)
	{
		str = argv[n1];

		for (n2 = 0; str[n2] != '\0'; n2++)
		{
			is_int = isdigit(str[n2]);

			if (is_int == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(str);
	}
	printf("%d\n", result);
	return (0);
}

