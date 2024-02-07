include "main.h"
/**
 * leet- changes str to leet speak
 * @str: string to be translated
 *
 * Return: str
 *
 */

char *leet(char *str)
{
	int str_ch, map_row, n_map;
	
	char *map[][2] =
	{
		{'a', '4'},
		{'A', '4'},
		{'e', '3'},
		{'E', '3'},
		{'o', '0'},
		{'O', '0'},
		{'t', '7'},
		{'T', '7'},
		{'l', '1'},
		{'L', '1'}
	};

	n_map = 10;

	for (str_ch = 0; str[str_ch] != '\0'; str_ch++)
	{
		for (map_row = 0; map_row < n_map; map_row++)
		{
			if (str[str_ch] == map[map_row][0])
			{
					str[str_ch] = map[map_row][1];
			}
		}
	}
	return (str);
}
