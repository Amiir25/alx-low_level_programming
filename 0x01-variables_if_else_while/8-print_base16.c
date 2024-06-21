#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}

	n = 0;

	while (n <= 6)
	{
		putchar('a' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
