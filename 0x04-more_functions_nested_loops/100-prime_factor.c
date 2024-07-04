#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	long int number = 612852475143;
	long int largest = 0;
	long int i = 2;

	while (number % i == 0)
	{
		largest = i;
		number /= i;
	}
	i = 3;

	while (number % i == 0)
	{
		largest = i;
		number /= i;
	}

	for (i = 5; i * i <= number; i += 6)
	{
		while (number % i == 0)
		{
			largest = i;
			number /= i;
		}

		while (number % (i + 2) == 0)
		{
			largest = i;
			number /= i;
		}
	}

	if (number > 1)
	{
		largest = number;
	}

	printf("%li\n", largest);

	return (0);
}
