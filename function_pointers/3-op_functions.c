#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * op_add- adds two ints
 * @a: int to be added
 * @b: int to also be added
 *
 * Return: sum of two ints
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- subtracts b from a
 * @a: int to be subtracted from
 * @b int to subtract with
 *
 * Return: answer to the subtraction
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiplies a by b
 * @a: int to mulitply by b
 * @b: int to multiply by a
 *
 * Return: product
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- divides a by b
 * @a: integer to be divided by b
 * @b: integer to divide by
 * 
 * Return: a divided by b
 *
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- gives remainder after dividing a by b
 * @a: integer to be divided by b
 * @b: integer to divide by
 *
 * Returns: remainder
 *
 */

int op_mod(int a, int b)
{
	return (a % b)
}

