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

	if (*h == NULL || idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (i = 0; i < idx; i++)
	{
		if (current->next == NULL)
		{
			return (add_dnodeint_end(h, n));
	
		current = current->next;
	}

	new = malloc(sizeof(dlistint_t));
	
	if (new == NULL)
	{
		return (NULL);
	}

	new->prev = current->prev;
	new->n = n;
	new->next = current;

	current->prev->next = new;
	current->prev = new;

	return (new);
}
