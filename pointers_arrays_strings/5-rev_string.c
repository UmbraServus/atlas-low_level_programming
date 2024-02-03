#include "main.h"
/**
 * rev_string- reverses value of string
 * @s: string value to be reversed
 *
 * Return: void
 *
 */

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

void rev_string(char *s)
{
	int len;

	int x;

	char temp;

	len = _strlen(s);

	for (x = 0; x < len / 2; x++)
	{
		temp = s[x];
		s[x] = s[len - x - 1];
		s[len - x - 1] = temp;
	}
}
