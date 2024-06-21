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
	int a;

	for (a = 0; a <= 9; a++)
	{
		int b;

		for (b = 0; b <= 9; b++)
		{
			int c;

			for (c = 0; c <= 9; c++)
			{
				int d;

				for (d = 0; d <= 9; d++)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);

					if (a != 9 && b != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
