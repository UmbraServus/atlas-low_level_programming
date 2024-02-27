#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * main()- the main function
 * @argc: number of args
 * @argv: arr of args
 *
 * Return: err or 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	int (*operation)(int, int);

	operation = get_op_func(op);

	int result;

	result = 0;
	result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
