#include "search_algos.h"

/**
 * linear_search- searches through an array one at a time.
 * @array: array to be searched through
 * @size: size of the array(how many numbers are in it).
 * @value: number to look for in the array
 *
 * Return: -1 on fail and index of array on success
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
	return (-1);
	}
	for (i  = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

return (-1);
}
