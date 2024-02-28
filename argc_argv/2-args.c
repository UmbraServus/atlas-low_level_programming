#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints each argv input
 * @argc: number of inputs
 * @argv: array of string arg vectors
 * 
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i])
	}

	Return (0);
}
