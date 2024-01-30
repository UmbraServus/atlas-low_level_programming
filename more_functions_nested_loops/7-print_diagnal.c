#include "main.h"
/**
 * print_diagnal- prints a diagnal back slash n times
 * @n: the number of times to print '\'
 *
 * Return: void
 *
 */

void print_diagonal(int n)
{

	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
		}

		_putchar('\n');

	}
}
