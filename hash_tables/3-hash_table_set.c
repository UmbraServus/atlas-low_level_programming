#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"


/**
 *
 *
 *
 *
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node;
	hash_node_t *array_index = ht->array[index];

	if (ht || key || value == NULL)
	{
		return (-1)
	}

	if (array_index == NULL)
	{
		array_index = malloc(sizeof(hash_node_t) + 1);
		if (array_index == NULL)
		{
			return (-1);
		}

		array_index->key = strdup(key);
		if (array_index->key == NULL)
		{
			free(array_index);
			return (-1);
		}

		array_index->value = strdup(value);
		if (array_index->value == NULL)
		{
			free(array_index->key);
			free(array_index);
			return (-1);
		}

		array_index->next = NULL;
		ht->array[index] = array_index;

		return (1);
	}

	while (array_index != NULL)
	{
		if (strcmp(array_index->key, key) == 0)
		{
			free(array_index->value);
			array_index->value = strdup(value);
			return (1);
		}

		array_index = array_index->next;

	}

	new_node = malloc(sizeof(hash_node_t) + 1);
	if (new_node == NULL)
	{
		return (-1);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (-1);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (-1);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
