#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - print a struct
 * @d: a pointer to the struct
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
