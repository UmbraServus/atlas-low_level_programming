#include "main.h"
/**
 *
 *
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
