#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint- adds a node to the head
 * @head: head of the list
 * @n: int to be added to the int element in the struct
 *
 * Return: new node as head
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = NULL;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
