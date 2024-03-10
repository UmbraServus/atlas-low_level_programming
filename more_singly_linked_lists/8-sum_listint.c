#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint- adds all the int elements up in the list
 * @head: head reference
 *
 *
 * Return: int sum of all numbers
 *
 */

int sum_listint(listint_t *head)
{
	int n;

	if (head == NULL)
	{
		return (0);
	}

	n = 0;

	while (head != NULL)
	{
		 n = n + head->n;
		 head = head->next;
	}

	return (n);
}
