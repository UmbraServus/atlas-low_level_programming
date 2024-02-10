#include "main.h"

/**
 *
 *
 *
 *
 */

int _sqrt_recursion(int n)
{
	int m;

	m = n / 2;

	if (m * m > n)
	return (_sqrt_recursion(int n - ( m - 1) * (m - 1)));

	else if (m * m == n)
	{
		return (m);
	}
	else if ( m < 0)
	{
		return (-1);
	}
}
