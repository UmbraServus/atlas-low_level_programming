#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc- allocates memory for an array if nmemb elements of size bytes
 * @nmemb: the number of elements
 * @size: the number of bytes
 *
 * Return: NULL if fail and return ptr if success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr
	    size_t total
	    size_t i

    if (nmemb == 0 || size == 0)
    {
        return NULL;
    }
	
	total = nmemb * size;
	ptr = malloc(total);
	
	if (ptr == NULL)
    {
	     return NULL;
    }

    char *byte_ptr = (char *)ptr;

    for (i = 0; i < total; i++)
    {
        byte_ptr[i] = 0;
    }

    return (ptr);
}
