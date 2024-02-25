#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *
 *
 *
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(98);
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age == NULL)
	{
		printf("Age: (nil)");
	}

	else
	{
		printf("Age: %d\n", d->age);
	}

	if (d->Owner == NULL)
	{
		printf("Owner: (nil)");
	}

	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
