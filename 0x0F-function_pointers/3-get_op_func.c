#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 * get_op_func - get function for operation
 * @s: the operator
 * 
 * Return: pointer to operation function
 */

op_t get_op_func(char *s)
{
	int i;
	op_t ops[] = 
	{
		{"+", op_add},
		{"+", op_sub},
		{"+", op_mul},
		{"+", op_div},
		{"+", op_mod},
		{NULL, NULL},
	}

	while (i < 5)
	{
		if (strstr(ops[i], s))
		{
			return (ops[i][1]);
		}
		i++;
	}

	return (NULL);
}
