#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the product fo two arguments passed to the program
 * @argc: the number of the elements of argv
 * @argv: array of commads
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
