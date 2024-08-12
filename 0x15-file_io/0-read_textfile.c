#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads and prints a text file
 * @filename: a pointer to the file
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	ssize_t read_f, write_f;
	char *buf;

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fl);
		return (0);
	}

	read_f = read(fl, buf, letters);
	if (read_f == -1)
	{
		free(buf);
		close(fl);
		return (0);
	}

	write_f = write(STDOUT_FILENO, buffer, read_f);
	if (write_f == -1 || write_f != read_f)
	{
		free(buf);
		close(fl);
		return (0);
	}

	free(buf);
	close(fl);
	return (write_f);
}
