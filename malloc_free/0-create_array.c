#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array- creates an array of any size initialized with c
 * @size: size of the array to be created
 * @c: character to be initialized into the array
 *
 * Return: NULL if fail or size is 0 on success return new array (new c)
 *
 */

char *create_array(unsigned int size, char c)
{
	char *new_c;
	size_t i;

	i = 0;

	new_c = malloc(sizeof(char) * size);

	if (size == 0 || new_c == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		new_c[i] = c;
			i++;
	}
	new_c[size] = '\0';

	return (new_c);
}
