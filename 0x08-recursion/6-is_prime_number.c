#include <stdio.h>
#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be checked
 *
 * Return: 1 if the number is prime or 0
 */

int is_prime_number(int n)
{
	int result;

	if (n <= 1)
	{
		return (0);
	}

	result = check_prime(n, 2);

	return (result);
}

/**
 * check_prime - check if a number is prime
 * @n: the number to be checked
 * @i: the divisor
 *
 * Return: 1 for prime or 0
 */

int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (check_prime(n, i + 1));
}
