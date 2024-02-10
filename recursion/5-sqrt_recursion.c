#include "main.h"

/**
 * _sqrt_recursion- sqrt recursively
 * @n: number to find the sqrt of
 *
 * Return: natural sqrt, -1 or 1
 *
 */
int sqrt_helper(int n, int m);


int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);

	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper- helper function to do the sqrt recursively
 * @n: number to find sqrt of
 * @m: the numbers to iterate thru until found a natural square of n
 *
 * Return: -1 if negative and natural sqrt
 *
 */

int sqrt_helper(int n, int m)
{
	if (m * m == n)

		return (m);

	else if (m * m > n)

	return (-1);

	else
		return (sqrt_helper(n, m + 1));
}
