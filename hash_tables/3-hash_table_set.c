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
	hash_node_t *prev;
	hash_node_t *array_index = ht->array[index];

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

		prev = array_index;
		array_index = prev->next;

	}

	prev->next = array_index;
	array_index = malloc(sizeof(hash_node_t) + 1);
	if (array_index == NULL)
	{
		return (-1);
	}
	array_index->key = strdup(key);
	array_index->value = strdup(value);

	return (1);
}
