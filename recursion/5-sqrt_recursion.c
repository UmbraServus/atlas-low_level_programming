#include "main.h"

/**
 *
 *
 *
 *
 */

int sqrt_helper(int n, int m);


int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);

	else if (n == 1 || n == 0)

		return (n);
	else

	return(sqrt_helper(n, n / 2));
}

int sqrt_helper(int n, int m)
{
	if (m * m == n)

		return (m);

	else if (m * m > n)

	return (sqrt_helper(n, m - 1));

	else
		return (sqrt_helper(int n, m + 1));
}
