#include <stdio.h>
#include <stddef.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - gets the operator to be used for arithmetic
 * @s: the operator inputed by user
 *
 * Return: returns the right operation on the two int.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = { {"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}, {NULL, NULL} };
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (!strcmp(ops[i].op, s))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
