#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024
#define USAGE_EXIT_CODE 97
#define READ_ERROR_EXIT_CODE 98
#define WRITE_ERROR_EXIT_CODE 99
#define CLOSE_ERROR_EXIT_CODE 100

/**
 * print_error_and_exit - prints error messages and exit
 * @exit_code: integer variable
 * @message: a pointer
 *
 * Return: Nothing
 */

void print_error_and_exit(int exit_code, const char *message, ...)
{
	va_list args;

	va_start(args, message);
	dprintf(STDERR_FILENO, message, args);
	va_end(args);
	exit(exit_code);
}

/**
 * main - check the code
 * @argc: number of flags
 * @argv: array of flags
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

	const char *file_from;
	const char *file_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		print_error_and_exit(USAGE_EXIT_CODE,
		"Usage: cp file_from file_to\n");
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(READ_ERROR_EXIT_CODE,
		"Error: Can't read from file %s\n", file_from);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error_and_exit(WRITE_ERROR_EXIT_CODE,
		"Error: Can't write to %s\n", file_to);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			print_error_and_exit(WRITE_ERROR_EXIT_CODE,
			"Error: Can't write to %s\n", file_to);
	}
	if (bytes_read == -1)
		print_error_and_exit(READ_ERROR_EXIT_CODE,
		"Error: Can't read from file %s\n", file_from);
	if (close(fd_from) == -1)
		print_error_and_exit(CLOSE_ERROR_EXIT_CODE,
		"Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		print_error_and_exit(CLOSE_ERROR_EXIT_CODE,
		"Error: Can't close fd %d\n", fd_to);
	return (0);
}
