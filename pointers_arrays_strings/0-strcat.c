#include "main.h"
/**
 *
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while ((*dest++ = *src++))

		return (dest);
}
