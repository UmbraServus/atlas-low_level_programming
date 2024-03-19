#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get- gets the a specific node within the hashtable
 * @ht: hashtable array to go to using hash index
 * @key: key to hash and get index
 *
 *
 * Return: value on succes and NULL on failure
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = index_key((unsigned const char *)key, ht->size);
	hash_node_t current_node = ht->array[index];

	if (current_node == NULL)
	{
		return (NULL);
	}

	while (current_node !=  NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}

		current_node = current_node->next;
	}

	return (NULL);

}
