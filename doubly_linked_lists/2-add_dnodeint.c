#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 *
 *
 *
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	
	temp = malloc(sizeof(dlistint_t));

	if (*head == NULL)
	{
		temp->prev = NULL;
		temp->n = n;
		temp->next = NULL;
		*head = temp;

		return (*head);
	}

	else
	{
		temp->prev = NULL;
		temp->n = n;
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;

		return (*head);
	}
}
