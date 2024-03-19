#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_djb2- a function to turn a str n2 an int for indexing in a hash table
 * @str: str to be converted to a hash using an algorithm
 *
 * Return: hash
 *
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
