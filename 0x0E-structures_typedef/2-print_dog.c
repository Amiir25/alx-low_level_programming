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
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->name = "nil";
	}
	if (d->age == NULL)
	{
		d->age = "nil";
	}
	if (d->owner == NULL)
	{
		d->owner = "nil";
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
