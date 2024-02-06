#include "main.h"
/**
 * string_toupper- changes a string to an uppercase from lowercase
 * @str: string to be checked and changed to upper from lower case
 *
 * Return: str
 *
 */

char *string_toupper(char *str)
{
	int n;

	for (n = 0; str[n]; n++)
	{
		if (str[n] >= 97 && str[n] <= 122)
		{
			str[i] = str[i] - 32;
		}

	}
	
	return str;
}
