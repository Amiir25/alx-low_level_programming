#include <stdio.h>
#include "main.h"

/**
 * main - prints
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("%s ", "FizzBuzz");
			}
			else
			{
				printf("%s ", "Fizz");
			}
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%i ", i);
		}
	}
	puts("");

	return (0);
}
