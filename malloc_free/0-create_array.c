#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	char *new_c;
	size_t i;
	i = 0;

	new_c =malloc(sizeof(char) * (size + 1));

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
