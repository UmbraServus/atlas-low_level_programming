#include "main.h"
/**
 * _pow_recursion- x to the power of y
 * @x: constant
 * @y: amount of constant
 *
 * Return: Result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (0);
	}

	else if (y < 0)
	{
		return (-1);
	}

	return ((x * _pow_recursion(x, --y)));
			}
