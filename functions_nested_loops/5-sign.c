#include "main.h"
/**
 * print_sign- entry point printing the sign of n +, -, or 0
 * @n: the character to be checked
 *
 * Return: 1,0, or -1
 */

int print_sign(int n)
{
	
	if (n > 0)
	{

		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar(n);
			return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		return(-1)
	}
}
