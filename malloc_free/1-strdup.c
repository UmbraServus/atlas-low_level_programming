#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * _strlen- calculates length of string
 * @s: string to be calculated
 *
 * Return: x
 *
 */

int _strlen(char *s)
{

	int x;

	x = 0;

		while (s[x] != '\0')
		{
			x++;
		}
	return (x);
}

/**
 * _strdup- duplicates a string and allocates memory not in that order.
 * @str: string to be duplicated
 *
 * Return: NULL if fail and new_str if success
 *
 */

char *_strdup(char *str)
{
	char *new_str;
	int i;
	int length;

	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	length = _strlen(str);
	new_str = malloc(sizeof(char) * (length + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	while (i < length)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}
