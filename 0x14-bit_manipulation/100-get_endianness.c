#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int value;
	char *ptr;

	value = 1;
	ptr = (char *) &value;

	return ((*ptr == 1) ? 1 : 0);
}
