#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog- frees dog struct and elements
 * @d: pointer to struct
 *
 * Return: void
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		exit(98);
	}

	free(d->name);
	free(d->owner);
	free(d);
}
