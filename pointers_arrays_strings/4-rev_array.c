#include "main.h"
/**
 * reverse_array- reverse array
 * @a: array to be reversed
 * @n: number of ints in array
 *
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int temp;
	int x;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
	}
}
