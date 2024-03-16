#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint- adds all the int data in the dlist from each node
 * @head: start of the list
 *
 * Return: result of the sum
 *
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int result;

	current = head;
	result = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		result = current->n + result;
		current = current->next;
	}

	return (result);
}

