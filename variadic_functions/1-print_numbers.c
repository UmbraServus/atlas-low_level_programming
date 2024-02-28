#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers- prints n amount of numbers seprated by a separator if
 * not null
 * @
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	unsigned int i;
	int number;

	for (int i = 0; i < n; i++)
	{
		number = va_arg(args, int);

		if (separator != NULL)
		{
			printf("%s%d", separator, number);
		}
		else 
		{
			printf("%d", number);
		}

		printf("\n");
	}
}