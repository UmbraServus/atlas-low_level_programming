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
	{
		return (-1);
	}
	
	return(sqrt_helper(n, n / 2));
}

int sqrt_helper(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	
	else if (m * m > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, n - 1));
}
