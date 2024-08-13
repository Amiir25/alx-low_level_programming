#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 * @filename: a pointer to the file
 * @text_content: a string to append in the file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(fl, text_content, strlen(text_content));
		if (written == -1)
		{
			close(fl);
			return (-1);
		}
	}

	close(fl);
	return (1);
}
