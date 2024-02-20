#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- checks if malloc worked and exits with a 98 value if failed
 * @b: the amount of memory to be allocated
 *
 * Return: mallcheck if successful
 *
 */

void *malloc_checked(unsigned int b)
{
	void *mallcheck;

		mallcheck = malloc(b);

		if (mallcheck == NULL)
		{
			exit(98);
		}

		return (mallcheck);
}
