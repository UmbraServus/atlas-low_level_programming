#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"
#include "strdup.c"
/**
 * new_dog- new dog to be entered into struct
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owners name of new dog
 *
 * Return: pointer to dog_t nd
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
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->age = age;

	nd->owner = _strdup(owner);
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	return (nd);
}
