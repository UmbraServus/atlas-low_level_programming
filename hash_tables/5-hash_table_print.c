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
	int comma;
	if (ht == NULL)
	{
		printf("{}");
	}
	
	
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		
		while (node != NULL)
		{
			if (comma == 1)
			{
				printf(", ");
			}
			
			printf("'%s': '%s'", node->key, node->value);
			comma = 1;
			node = node->next;
		}

	}
	printf("}\n");
}

