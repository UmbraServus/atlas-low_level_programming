#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
/**
 * print_list- prints through the singly linked list
 * @h: points to a node that points to another node ect, ect ...
 *
 * Return: Count of elements printed
 *
 */

size_t print_list(const list_t *h)
{
	int Count;
	const list_t *pointer = NULL;
	pointer = h;
	Count = 0;

	if (h == NULL)
	{
		return(-1);
			printf("struct is null");
	}


	while (pointer != NULL)
	{
		if (pointer->str == NULL)
		{
			printf("[0] nil/n");
		}
		
		else
		{
			printf("[%d] %s", pointer->len,  pointer->str);
			pointer = pointer->next;
			Count++
		}
	return (Count);
	}
}
