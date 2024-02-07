#include "main.h"
/**
 * _memset- string to be overwritten by b. n amount of times.
 * s: string to be overwitten
 * b: string to be used
 * n: number of characters into string s to be overwritten
 *
 * Return: s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n2;

	for (n2 = 0; n2 < n; n2++)
	{
	s[n2] = b;
	}

	return (s)
}
