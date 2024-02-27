#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_op_func- gets a function based on which operator is input
 * @s: operator
 *
 * Return: gives answer to the operator function
 *
 */

int (*get_op_func(char *s))(int, int)
{
	   op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    while (ops[i].op != NULL)
    {
	    if (*(ops[i].op) == *s && *(s + 1) == '\0')
	    {
		    return (ops[i].f);
	    }
	    i++;
    }
    return (NULL);
}
