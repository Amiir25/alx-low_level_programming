#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - get function for operation
 * @s: the operator
 *
 * Return: pointer to operation function
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
