#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint- add either the first node if no head or adds a node to head
 * head: head of the doubly linked list
 * n: data int to add to struct
 *
 * Return: NULL onf fail or ptr to new head on scucces
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

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
