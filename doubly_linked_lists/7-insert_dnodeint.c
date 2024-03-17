#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index- inserts new node at the nth index
 * @h: head of linked list
 * @idx: the nth index to traverse to
 * @n: int data for the new node
 *
 * Return: NULL on failure, new on success
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int i;

	current = *h;

	if (*h == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	for (i = 0; i < idx; i++)
	{
		if (current->next == NULL)
		{
			new->prev = current;
			current->next = new;

			return (new);
		}

		current = current->next;
	}

	new->prev = current->prev;
	new->next = current;
	current->prev->next = new;
	current->prev = new;

	return (new);
}
