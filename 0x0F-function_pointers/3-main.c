#include <stdio.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: length og argv[]
 * @argv: character string
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = operator(a, b);

	printf("%d\n", result);
	return (0);
}
