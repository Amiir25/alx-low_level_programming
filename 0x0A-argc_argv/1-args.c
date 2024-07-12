#include <stdio.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: the number of the elements of argv
 * @argv: array of commads
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv != NULL)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
