#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 *
 *
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	nd = malloc(sizeof(dog_t));

	if (nd == NULL)
	{
		return (NULL);
	}
	
	nd->name = _strdup(name);
	nd->age = age;
	nd->owner = _strdup(owner);
	
	return (nd);
}
