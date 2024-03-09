#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len- counts the number of elements in the list.
 * @h: the head of the list
 *
 *
 * Return: counter of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t counter;

	current = h;
	counter = 0;

	if (h == NULL)
	{
		return (counter);
	}

	while (current != NULL)
	{
		counter++;
		current = current->next;
	}

	return (counter);
}
