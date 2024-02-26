#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator- iterates thru an array and applies a function to the elements
 * of the array
 * @size: size of array
 * @array: the array
 * @action: the function to be called using function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
	       array[i] = action(array[i]);
	}
}
