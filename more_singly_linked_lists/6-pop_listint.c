#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint- mves h to the nxt ptr then deletes old h then returns h->n
 * @head: head of the list
 *
 *
 * Return: value of head->n as int head_n
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *old_h;
	int head_n;

	if (*head == NULL)
	{
		return (0);
	}

	head_n = (*head)->n;
	old_h = *head;
	*head = (*head)->next;
	free(old_h);

	return (head_n);
}
