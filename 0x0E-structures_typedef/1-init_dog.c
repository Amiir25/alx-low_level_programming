#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct
 * @d: the struct data ot type my_dog
 * @name: a field in my_dog
 * @age: a field in my_dog
 * @owner: a field in my_dog
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
