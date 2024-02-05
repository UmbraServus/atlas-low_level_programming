#include "main.h"
/**
 *
 * _strncpy- copy src striing into des string
 * @dest: string to be copied over
 * @src: source string to be copied
 * @n- the number of characters to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *beginning_dest = dest;

	while (n-- > 0 && *src != '\0')
	{
		*dest++ = *src++;
	}

	*dest= '\0';

	return (beginning_dest);
}
