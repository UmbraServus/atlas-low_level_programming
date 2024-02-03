void puts2(char *str)

{
	int x;

	for (x = 0; s[x] != '\0'; x += 2)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
