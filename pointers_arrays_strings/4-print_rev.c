#include "main.h"
/**
 *
 *
 *
 */

void print_rev(char *s)
{
	int length;
	
	for(length = strlen(s) - 1; length == 0; length--)
	{	
		_putchar(s[length]);
	}
	_putchar('\n');
}
