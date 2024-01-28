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
		int b = a % 10;

		_putchar(b);
	}
	else if (a < 0)
	{
	      int c = (a % 10) * -1;

	       _putchar(c);
	}
return (0);
}
