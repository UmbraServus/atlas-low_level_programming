#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len- counts elements thru a doubly linked list
 * @h: starting point in the doubly linked list
 *
 * Return: counter
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;
	const dlistint_t *current;

	counter = 0;
	current = h;

	if (h == NULL)
	{
		return (counter);
	}

	while (current != NULL)
	{

		current = current->next;
		counter++;
	}

	return (counter);
}
