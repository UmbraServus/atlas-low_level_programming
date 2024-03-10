#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index- delets the node at the nth index
 * @index: the nth index to iterate to
 * @head: head ref for the list to go thru until nth index
 *
 *
 * Return: -1 on fail and 1 on success
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c;
	listint_t *current_node;
	listint_t *node_before;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	current_node = *head;
	node_before = NULL;

	for (c = 0; c < index; c++)
	{

		if (current_node == NULL)
		{
			return (-1);
		}

		node_before = current_node;
		current_node = current_node->next;
	}

	node_before->next = current_node->next;

	free(current_node);
	return (1);
}


