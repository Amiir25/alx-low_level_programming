#include "main.h"

/**
 * print_last_digit - Checks if a number is positive negative or zero.
 * @n: The character to be checked
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	return (digit * 11);
}
