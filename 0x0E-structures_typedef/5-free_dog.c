#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free dogs
 * @d: a pointer
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
