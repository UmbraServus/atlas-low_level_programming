#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create- creates an empty hash table of nth size
 * @size: nth size of hashtable
 *
 *
 * Return: hashtable
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht->array);
		return (NULL);
	}

	ht->size = size;

	for (i = 0; i < size; ++i)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
