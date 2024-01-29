#include "main.h"
/**
 * _isdigit- checks to see if its a number or a letter
 * @c: number to be checked
 *
 * Return: 1 if a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
