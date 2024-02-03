#include "main.h"
/**
 * _puts- prints a string to stdo
 * @str: string to be printed
 *
 * Return: void
 *
 */

void _puts(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);

			x++;
	}
	_putchar('\n');
}
