#include "lists.h"
/**
 * _strlen- calculates length of string
 * @s: string to be calculated
 *
 * Return: x
 *
 */

int _strlen(char *s)
{

	int x;

	x = 0;

		while (s[x] != '\0')
		{
			x++;
		}
	return (x);
}
