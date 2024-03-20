#include "hash_tables.h"

/**
 *
 *
 *
 *
 */


 void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	if (ht == NULL)
	{
		return
	}
	
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		
		while (node != NULL)
		{
			printf({);
			printf("'%s': '%s', ", node->key, node->value);
			printf(});
			node = node->next;
		}
	}
}
