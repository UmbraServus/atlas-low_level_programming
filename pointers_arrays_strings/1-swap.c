#include "main.h"

/**
 * swap_int- swaps the ints a will = b and b = a.
 *
 *
 * 
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
		*b = temp;
}
