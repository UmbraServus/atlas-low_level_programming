#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len- returns count of elements of the linked list
 * @h: pointer to the list to be iterated thru
 *
 * Return: count
 *
 */


size_t list_len(const list_t *h)
{
	int Count;
	const list_t *pointer = NULL;

	pointer = h;
	Count = 0;

	if (h == NULL)
	{
		return (0);
	}


	while (pointer != NULL)
	{
		if (pointer->str == NULL)
		{
			pointer = pointer->next;
			Count++;
		}

		else
		{
			pointer = pointer->next;
			Count++;
		}
	}
	return (Count);
}
