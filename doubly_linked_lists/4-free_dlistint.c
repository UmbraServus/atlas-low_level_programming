#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint- frees the doubly linked list
 * @head start of the list
 *
 *
 * Return: void
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;

	if (head == NULL)
	{
		return;
	}

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
