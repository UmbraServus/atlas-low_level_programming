#include "main.h"
/**
 *
 *
 *
 */

void print_rev(char *s)
int _strlen(char *s)
{
	int x, len;
	len = _strlen(s);
	
	for(x = len - 1; x == 0; x--)
	{	
		_putchar(s[x]);
	}
	_putchar('\n');
}
