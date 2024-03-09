#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint- prints the ints in the linked list
 * @h: the head of the list
 *
 *
 * Return: counter of elements
 *
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current_node;
	size_t counter;

	current_node = h;
	counter = 0;

	if (h == NULL)
	{
		return (counter);
	}

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		counter++;
	}

	return (counter);
}
