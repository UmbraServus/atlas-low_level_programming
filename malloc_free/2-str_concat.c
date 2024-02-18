#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "strlen.c"
/**
 * str_concat- appends s1 onto s2 into a new string
 * @s1: string to be appended to in a new string
 * @s2: string to append to s1 in a new string
 *
 * Return: NULL if fail new string if success
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	new_str = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < _strlen(s1); i++)
	{
		new_str[i] = s1[i];
	}

	for (j = 0; j < _strlen(s2); j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
