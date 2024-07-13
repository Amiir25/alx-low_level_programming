#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive - check if an argument is digit
 * @str: string of chars
 *
 * Return: 1 for digit or 0
 */

int is_positive(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}

	while (*str)
	{
		if (!(isdigit(*str)))
		{
			return (0);
		}
		str++;
	}

	return (1);
}


/**
 * main - print the sum of  the arguments passed to the program
 * @argc: the number of the elements of argv
 * @argv: array of commads
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(is_positive(argv[i])))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
