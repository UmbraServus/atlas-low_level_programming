#include "main.h"
/**
 *
 *
 *
 */

int print_last_digit(int a)
{

	while (a > 0)
	{
		int a = a % 10;

		_putchar(a);
	}
	while (a < 0)
	{
	       int a = (a % 10) * -1;

	       _putchar(a);
	}
return (0);
}
