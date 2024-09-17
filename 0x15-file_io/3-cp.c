#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void close_file(int fd);
void handle_error(const char *message, const char *filename, int exit_code);
void copy_content(int fd_from, int fd_to);

/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, or exit with error code on failure.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		handle_error("Error: Can't read from file", argv[1], 98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from);
		handle_error("Error: Can't write to", argv[2], 99);
	}

	copy_content(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * handle_error - Handles errors by printing a message and exiting.
 * @message: The error message to print.
 * @filename: The name of the file related to the error.
 * @exit_code: The exit code to use.
 */
void handle_error(const char *message, const char *filename, int exit_code)
{
	dprintf(2, "%s %s\n", message, filename);
	exit(exit_code);
}

/**
 * copy_content - Copies content from one file descriptor to another.
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 */
void copy_content(int fd_from, int fd_to)
{
	char buffer[1024];
	ssize_t read_bytes, write_bytes;

	while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			close_file(fd_from);
			close_file(fd_to);
			handle_error("Error: Can't write to", "", 99);
		}
	}

	if (read_bytes == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		handle_error("Error: Can't read from file", "", 98);
	}
}

