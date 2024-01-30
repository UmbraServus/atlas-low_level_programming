#include "main.h"
/**
 * print_diagonal- prints a diagonal back slash n times
 * @n: the number of times to print '\'
 *
 * Return: void
 *
 */

void print_diagonal(int n)
{

	int i, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
			{
			_putchar(32);
			}
		}
		_putchar(92);
		_putchar('\n');

	}
}
