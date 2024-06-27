#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints
 *
 * Return: void
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 3) == 0 && (i % 5) == 0)
			{
				printf("%8s ", "FizzBuzz");
			}
			else
			{
				printf("%4s ", "Fizz");
			}
		}
		else if ((i % 5) == 0)
		{
			printf("%4s ", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	puts("");
}
