#include "main.h"
/**
 * factorial- takes n and times it by n - 1, until 0.
 * @n: number to be used
 *
 * Return: result
 *
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return ((n * factorial(n - 1)));
}
