#include <stdio.h>
#include <stdio.h>
/**
* main - entry point
* Return: 0
*/
int main(void)
{
int c;
char a;

for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (a = 'a'; a <= 'f'; a++)
{
	putchar(a);
}

putchar('\n');

return (0);
}
