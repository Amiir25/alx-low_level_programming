#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: a pointer to the name
 * @f: a pointer to a function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
