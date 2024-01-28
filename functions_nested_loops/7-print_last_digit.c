#include "main.h"
/**
 *
 *
 *
 */

int print_last_digit(int a)
{

	if (a > 0)
	{
		a = a % 10;

		_putchar(a);
	}
	else if (a < 0)
	{
	       a = (a % 10) * -1;

	       _putchar(a);
	}
return (0);
}
