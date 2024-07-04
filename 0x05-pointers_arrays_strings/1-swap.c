#include "main.h"

/**
 * swap_int - swap values
 * @a: pointer variable
 * @b: pointer variable
 *
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
