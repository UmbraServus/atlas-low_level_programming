#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name- prints names using function pointer to other functions
 * @name: name to be printed
 * @f: function to be used.
 *
 * Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
