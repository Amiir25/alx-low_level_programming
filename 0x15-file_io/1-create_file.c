#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: a pointer to the file
 * @text_content: a string to write in the file
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fl, write_f, len;

	if (filename == NULL)
		return (-1);

	len = 0;
	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fl == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		write_f = write(fl, text_content, len);
		if (write_f == -1)
		{
			close(fl);
			return (-1);
		}
	}

	close(fl);
	return (1);
}
