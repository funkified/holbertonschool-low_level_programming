#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 != 0 && i % 5 != 0)
		printf("%d", i);
	else
	{
		if (i % 3 == 0)
			printf("%s", "foo");
		if (i % 5 == 0)
			printf("%s", "bar");
	}
	if (i != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
