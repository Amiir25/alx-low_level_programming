#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *argstostr - concatenate arguments
 * @ac: number arguments
 * @av: double pointer
 *
 * Return: the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, position;
	char *concat;
	int len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	concat = (char *)malloc((len + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}

	position = 0;
	for (i = 0; i < len; i++)
	{
		strcpy(concat + position, av[i]);
		position += strlen(av[i]);
		concat[position] = '\n';
		position++;
	}
	concat[len] = '\0';
	return (concat);
}
