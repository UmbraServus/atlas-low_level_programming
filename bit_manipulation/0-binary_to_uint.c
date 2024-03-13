#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen- calculates length of string
 * @s: string to be calculated
 *
 * Return: x
 *
 */

size_t  _strlen(const char *s)
{

	int x;

	x = 0;

		while (s[x] != '\0')
		{
			x++;
		}
	return (x);
}

/**
 * binary_to_unit- changes binary str to base 10
 * @b: str of binary to use
 *
 * Return: base 10 unsigned int
 *
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	size_t length;
	size_t i;

	result = 0;
	length = _strlen(b);

	if (*b == NULL)
	{
		return (0);
	}

	for (i = 0; i < length; i++)
	{
		if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}

		else if (b[i] == '0')
		{
			result <<= 1;
		}

		else
		{
			return (0);
		}
	}

		return (result);
}
