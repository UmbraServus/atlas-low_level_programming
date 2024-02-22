#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog- initializes dog struct
 * @d: pointer to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d

		d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}
	
	d->name = name;
	d->age = age;
	d->owner = owner;
}
