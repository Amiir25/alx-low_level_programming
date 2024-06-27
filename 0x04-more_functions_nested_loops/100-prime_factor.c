#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	long int number = 612852475143;
	long int largest;

	while ((number % 2 == 0) || (number % 3 == 0))
	{
		if (number > 3)
		{
			if (number % 2 == 0)
			{
				number /= 2;
			}
			else
			{
				number /= 3;
			}
		}
	}

	largest = number;

	printf("%li\n", largest);

	return (0);
}
