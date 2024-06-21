/**
 * File: 6-size.c
 * Author: Amir Sadik
 * This file contains a C program that prints the size of data types
 */

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
