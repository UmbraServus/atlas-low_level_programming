#include "main.h"
/**
 * print_line- prints a traight line in terminal
 * @n: number of lines to be printed
 *
 * Return: void
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n')

	}
	for (l = 0; l < n; l++)
	{
		_putchar(95);
	}
	
	_putchar('\n');
}
