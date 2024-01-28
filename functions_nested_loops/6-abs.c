#include "main.h"
/**
 *
 *
 */

int _abs(int a)
{
	if (a > 0)
	{
		_putchar(a);
	}
	else if (a < 0)
	{
		int b = a * -1;
		_putchar(b);
	}
	return (0);
}
