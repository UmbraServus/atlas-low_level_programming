#include "main.h"
/**
 * more_numbers- putchars 0 - 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if (i < 14)
		{
			_putchar((i / 10)+ '0');
			_putchar((i % 10)+ '0');
		}
		
		_putchar("\n");
	}
	i++
}
