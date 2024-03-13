#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary- prints binary from base 10.
 * @n the base 10 number to convert
 *
 * Return: void
 *
 */

void print_binary(unsigned long int n) 
{
	if (n > 1)
	{
		print_binary(n / 2);
	}
	
	printf("%lu", n % 2);
}
