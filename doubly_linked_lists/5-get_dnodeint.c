#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index- gets node at the nth index and returns that node
 * @head: start of linked list
 * @index: number of nodes to traverse
 *
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int c;

	current = head;

	for (c = 0; c < index; c++)
	{
		if (current == NULL)
		{
			return(NULL);
		}

		current = current->next;
	}

	return (current);
}
