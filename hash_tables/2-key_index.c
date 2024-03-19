#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index- uses hash algorithm to turn key into hash n assign indx
 * @key: str to be converted to hash
 * @size: size of the array of ptrs to keys
 *
 * Return: index
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int i;
	unsigned long int index;

	for (i = 0; i < size; i++)
	{
		hash = hash_djb2(key);
	}

	index = hash % size;

	return (index);
}
