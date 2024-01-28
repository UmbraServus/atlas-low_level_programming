#include "main.h"
/**
 * _abs- computes absolute value of an int
 * @a: int to be given its absolute value from 0
 *
 * Return: a or b absolute value
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
