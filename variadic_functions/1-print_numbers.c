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
	unsigned int i;
	int number;


	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);

		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s",separator);
			}
		}
	}

		printf("\n");

		va_end(args);
}
