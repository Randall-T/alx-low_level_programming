#include "main.h"

#define MAXSIZE 1024


/**
 * __exit - prints error messages while exiting with exit number
 *
 * @error: exit number or file descriptor
 * @str: name of file_in or file_out
 * @fd: file descriptor
 *
 * Return: 0 on success
*/
int __exit(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - copy the contents of file into another
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 for success.
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int read_from, write_to;
	int close_from, close_to;
	char buffer[MAXSIZE];


	if (argc != 3)
		__exit(97, NULL, 0);


	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		__exit(98, argv[1], 0);


	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		__exit(99, argv[2], 0);


	while ((read_from = read(file_from, buffer, MAXSIZE)) != 0)
	{
		if (read_from == -1)
			__exit(98, argv[1], 0);


		write_to = write(file_to, buffer, read_from);
		if (write_to == -1)
			__exit(99, argv[2], 0);
	}

	close_from = close(file_from);
	if (close_from == -1)
		__exit(100, NULL, file_from);

	close_to = close(file_to);
	if (close_to == -1)
		__exit(100, NULL, file_to);

	return (0);
}
