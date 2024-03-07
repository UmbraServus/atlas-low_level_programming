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
	
	for (x = 0; s[x] != '\0'; x++)
		{
			
		}
	return (x);
}

/**
 * add_node_end: adds node to the end of the line of lists before the NULL ptr
 * @head: beggining of the line to cycle thru til NULL
 * @str: constant char to be stored and counted with strlen
 *
 * Return: new_node or NULL on fail
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_node;

	new_node = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		temp_node = *head;

		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = new_node;
	}
	return (new_node);
}
