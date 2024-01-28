#include "main.h"
/**
 * jack_bauer- prints the time
 * Descript: prints 2400 clock
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a, b;
	
	for (a = 0; a < 24; h++)
	{
	for (b = 0; b < 60; m++)
	{
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
		_putchar(':');
		_putchar((b / 10) + '0');
		_putchar((b % 10) + '0');
		_putchar('\n');
	}
	}
}
