#include "main.h"
/**
 * print_alphabet_x10- entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)

{
	int a = 0;
	char i;

	while (a < 10)

	{
		for (i = 'a'; i <= 'z'; i++)

		{

		_putchar(i);

		}

		_putchar('\n');
		a++;

	}
}
