#include <stdio.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: length og argv[]
 * @argv: character string
 *
 * Return: Always 0
 */

int main(int argc, char argv[])
{
	int a, b;
	int result;
	op_t operator;

	if (argc > 3)
	{
		printf("Error\n");
		return (98);
	}

	if (
	    argv[1] != "+" ||
	    argv[1] != "-" ||
	    argv[1] != "*" ||
	    argv[1] != "/" ||
	    argv[1] != "%")
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[0]);
	b = atoi(argv[2]);
	operator = get_op_func(argv[1]);

	if (operator != NULL)
	{
		result = operator(a, b);
	}

	printf(result\n);
	return (0);
}
