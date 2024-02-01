#include "main.h"

/**
 * swap_int- swaps the ints a will = b and b = a.
 *
 * @a: parameter to swap with b
 * @b: parameter to be swapped with a
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
