#include "main.h"
/**
 * _strcat- appends src onto dest and adds a null.
 * @dest: the destination string of the expression.
 * @src: the string to be appended to the end of dest.
 * @n: the number of character(s) to be appended from src
 *
 * Return: beginning_dest
 *
 */

char *_strcat(char *dest, char *src, int n)
{
        char *beginning_dest = dest;

        while (*dest != '\0')
        {
                dest++;
        }

        while (n-- > 0 && *src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';

                return (beginning_dest);
}
