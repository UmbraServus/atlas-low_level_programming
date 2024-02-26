#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator- iterates thru an array and applies a function to the
 * elements of the array
 * @size: size of array
 * @array: the array
 * @action: the function to be called using function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0)
	{
		return;
	}
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
