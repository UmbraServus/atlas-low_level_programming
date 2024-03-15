#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint- prints thru a doubly linked list
 * @h: starting point in the doubly linked list
 *
 * Return: counter
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;
	const dlistint_t current;

	counter = 0
	current = h

	if (h == NULL)
	{
		return (counter);
	}

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		counter++
	}

	return (counter);
}
