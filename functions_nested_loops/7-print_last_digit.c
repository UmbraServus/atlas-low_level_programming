#include "main.h"
/**
 * print_last_digit- to print the last digit of a given int
 * @a: number to get the last digit from
 * @b: last digit value
 *
 * Return: b value
 *
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (b < 0)
	{
		b = b * -1;
	}

	_putchar(b + '0');
	return (b);
}
