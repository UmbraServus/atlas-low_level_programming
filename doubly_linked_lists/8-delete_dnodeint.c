#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes node at nth index
 * @head: beginning of linked list
 * @index: nth node of the linked list
 *
 * Return: -1 on failure, 1 on success
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	if (current->next != NULL)
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
	}
	else
	{
		current->prev->next = NULL;
		current->prev->prev = NULL;
	}
	free (current);
	return (1);
}
