#include "main.h"
/**
 *
 *
 */

int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		int b = a * -1;
		return (b);
	}
	return (0);
}
