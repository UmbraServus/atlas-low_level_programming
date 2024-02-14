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

	new_c = malloc(sizeof(char) * (size + 1));

	if (size == 0 || c == '\0')
	{
		return (NULL);
	}

	while (i < size)
	{
		new_c[i] = c;
			i++;
	}
	new_c[i] = '\0';
	return (new_c);
	free (new_c)
}
