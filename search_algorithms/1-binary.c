#include "search_algos.h"

/**
 * binary_search- searches through an array using binary search.
 * @array: the array to search through
 * @size: size of the array(how many numbers in the array)
 * @value: the number being searched for
 *
 * Return: -1 on fail and the index of the array if succes
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L;
	size_t R;
	size_t m;
	size_t i;

	L = 0;
	R = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (L <= R)
	{
		m = (L + R) / 2;
		
		printf("Searching in array: ");

		for (i = L; i <= R; i++)
		{
			printf("%d, ", array[i]);
		}
		
		printf("\n");

		if (array[m] < value)
		{
			L = m + 1;
		}

		else if (array[m] > value)
		{
			R = m - 1;
		}

		else
		{
			return (m);
		}
	}
	return (-1);
}
