#include "main.h"
/**
 * more_numbers- putchars 0 - 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, i;
	a = 0;

	while (a < 10 )
	{
		for (i = 0;i <= 14; i++)
		{
			_putchar((i / 10)+ '0');
			_putchar((i % 10)+ '0');
		}
		
		_putchar('\n');
		
		a++
	}


}
