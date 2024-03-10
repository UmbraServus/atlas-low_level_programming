#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * inster_nodeint_at_index- inserts a new node right before the index
 * @head: head ref to list to iterate thru
 * @idx: nth index
 * @n: data to be enterted into new node
 *
 * Return: new_node or NULL if fail
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *new_node;
	listint_t *temp_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL || idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	temp_node = *head;

	for (c = 0; c < idx - 1; c++)
	{
		if (temp_node->next == NULL)
		{
			temp_node->next = new_node;
			return (new_node);
		}

		temp_node = temp_node->next;
	}
	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
