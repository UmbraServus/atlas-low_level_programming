#include "main.h"
/**
 *
 *
 *
 */

int print_last_digit(int a)
{
	int b = a % 10;

	if (b > 0)
	{

		_putchar(b);
	}
	else if (b < 0)
	{
		b = b * -1;
	}

	       _putchar(b);
	       return (0);
}
