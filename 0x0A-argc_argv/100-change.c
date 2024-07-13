#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number coins to make change for an amount of money
 * @argc: the number of the elements of argv
 * @argv: array of commads
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, result, cent;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent == 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		while (cent >= coins[i])
		{
			result++;
			cent -= coins[i];
		}
	}

	printf("%d\n", result);

	return (0);
}
