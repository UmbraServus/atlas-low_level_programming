#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2- frees the linked lists and also sets head to NULL
 * @head: head of the list to iterate thru to the tail or NULL ptr.
 *
 * Return: void
 *
 */


void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}

	*head = NULL;
}
