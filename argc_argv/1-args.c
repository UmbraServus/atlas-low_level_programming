#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- prints the count of args
 * @argc: argument count
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void)argv;

	return (0);
}
