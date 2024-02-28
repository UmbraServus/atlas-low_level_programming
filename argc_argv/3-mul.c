#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- multis two numbers
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: 0 if two arguments are supplied, 1 if not
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}

	return (0);
}
