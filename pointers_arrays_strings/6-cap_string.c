#include "main.h"
/**
 * capr_string- capitalizes the first of every word in a string
 * @str: string to feed into the function
 *
 * Return: str
 *
 */

char *cap_string(char *str)
{
	int word, n;

	word = 0;

		for ( n = 0; str[n]; n++)
		{
			if (str[n] >= 'A' && str[n] <= 'Z' || str[n] == 0 || str[n] == ' ' || str[n] == '\t' || str[n] == '\n' || str[n] == ',' || str[n] == ';' || str[n] == '.' || str[n] == '!' || str[n] == '?' || str[n] == '"' || str[n] == '(' || str[n] == ')' || str[n] == '{' || str[n] == '}')
			{
				word = 0;
			}

			else if (!word && str[n] >= 'a' && str[n] <= 'z')
			{
				str[n] = str[n] - 32;
				word = 1;
			}
		}
	return (str);
}
