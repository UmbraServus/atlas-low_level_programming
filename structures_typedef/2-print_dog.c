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

	if (d->age == " ")
	{
		printf("Age: (nil)\n");
	}

	else
	{
		printf("Age: %f.1\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
