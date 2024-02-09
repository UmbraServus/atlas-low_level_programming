#include "main.h"
/**
 * _strlen_recursion- counts string length recursively
 * @s: char string to count
 *
 * Return: int or length of string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);

	}

	return (_strlen_recursion(s + 1) + 1);
}
