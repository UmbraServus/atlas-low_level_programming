#include "main.h"

/**
 * print_alphabet- entry point
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
