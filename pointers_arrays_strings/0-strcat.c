#include "main.h"
/**
 * _strcat- appends src onto dest and adds a null.
 * @dest: the destination string of the expression.
 * @src: the string to be appended to the end of dest.
 *
 * Return: beginning_dest
 *
 */

char *_strcat(char *dest, char *src)
{
	char *beginning_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

		return (beginning_dest);
}
