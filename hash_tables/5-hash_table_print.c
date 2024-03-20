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

	if (ht == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		
		while (node != NULL)
		{
			printf("('%s': '%s', ) -> ", node->key, node->value);
			node = node->next;
		}
	}
}
