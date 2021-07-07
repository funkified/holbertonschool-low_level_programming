#include "holberton.h"

/**
 * _pow_recursion - returne the value of x raised to the power of y
 * @x: base number
 * @y: exponent number
 * Return: -1, if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
