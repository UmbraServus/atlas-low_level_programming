#include "main.h"
/**
 * _isupper- checks to see if c is upper case
 * @c: char to be checked
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);

}
