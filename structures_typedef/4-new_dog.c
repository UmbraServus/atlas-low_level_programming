#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	nd = malloc(sizeof(dog_t));

	if (nd == NULL)
	{
		return (NULL);
	}
	
	d->name = name;
	d->age = age;
	d->owner = owner;
	
	return (nd);
}
