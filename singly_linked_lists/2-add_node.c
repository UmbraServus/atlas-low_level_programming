#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen- calculates length of string
 * @s: string to be calculated
 *
 * Return: x
 *
 */

int _strlen(const char *s)
{

	int x;

	x = 0;

		while (s[x] != '\0')
		{
			x++;
		}
	return (x);
}

/**
 * add_node- adds a node to the linked list
 * @head: head of the line before the NULL
 * @str: string to be duped and also counted
 *
 * Return: head pointer or NULL if head or new_node is NULL
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = NULL;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;

	*head = new_node;

	return(*head);
}
