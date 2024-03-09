#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index- takes u 2 node at nth index and returns said index
 * @head the beginning of the list
 * @index the element of the list we are iterating to.
 *
 *
 * Return: the node at the nth index.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	if (head == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < index; c++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

	 head = head->next;
	}

	return (head);
}
