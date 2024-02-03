#include "main.h"

void puts2(char *str)

{
	int x;

	for (x = 0; str[x] != '\0'; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
