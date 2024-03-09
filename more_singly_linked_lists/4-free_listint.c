#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint- frees each structure in the linked list
 * @head the head of the list to be iterate thru
 *
 * Return: void
 *
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
