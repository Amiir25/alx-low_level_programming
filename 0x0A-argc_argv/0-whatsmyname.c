#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: the number of the elements of argv
 * @argv: array of commads
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
