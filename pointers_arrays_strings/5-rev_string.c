#include "main.h"
/**
 *
 *
 *
 */

void rev_string(char *s);
{
	len = strlen(s);
	int x;
	char temp;

	for (x = 0; x < len / 2; x++)
	{
		temp = s[x];
		s[x] = s[len - x - 1];
		s[len - x - 1] = temp;
	}
}
