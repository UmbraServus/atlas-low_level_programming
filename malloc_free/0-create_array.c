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
	int i;

	new_c = malloc(sizeof(char) * (size + 1));

	if (size = 0 || c = '\0')
	{
		return (null);
	}

	while (i < size)
	{
		new_c[i] = c;
			i++;
	}
	new_c[i] = '\0';
	return (new_c);
}
