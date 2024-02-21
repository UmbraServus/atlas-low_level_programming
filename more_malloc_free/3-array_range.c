#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range- creates an array filled with numbers from min to max in order
 * @min: minimum number in the sequence of numbers
 * @max: maximum number in the sequence of numbers
 *
 * Return: null on fail and array on success
 *
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

		if (min > max)
		{
			return (NULL);
		}

	array = malloc(sizeof(int) * (max - min + 1));

		if (array == NULL)
		{
			return (NULL);
		}

		for(i = 0; i <= (max - min); i++)
		{
			array[i] = min + i;
		}

		return (array);
}
