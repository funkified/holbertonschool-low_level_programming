#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigened int
 * @b: pointer to a string of 0 and 1 charsh
 * Return: the converted number or 0 ir theres 1 or more chars thats not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int idx = 0;
	int pow = 1;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	while (b[idx] != '\0')
	{
		idx++;
	}
	idx -= 1;

	while (idx >= 0)
	{
		if (b[idx] != '0' && b[idx] != '1')
		{
			return (0);
		}
		if (b[idx] == '1')
		{
			res += pow;
		}
		pow = pow * 2;
		idx--;
	}
	return (res);
}
