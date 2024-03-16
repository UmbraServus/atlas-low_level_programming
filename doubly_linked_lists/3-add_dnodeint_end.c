#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end- adds node to end before null byte
 * @head: start of doubly linked list
 * @n: int data held in each node
 *
 * Return: NULL on failure or address to new node on success
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		*head = new;

		return (*head);
	}

	else
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new;
		new->prev = current;

		return (new);
	}
}
