#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: name of the file
 * Return: buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to%s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - close file descriptors
 * @fd: file descriptors
 */

void close_file(int fd)
{
	int cf;

	cf = close(fd);

	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: arguments given
 * @argv: array to argc
 * Return: 0 on success else if arg count is incorrect - exit code 97
 *		if file_from does not exist or cannot be read - exit code 98
 *		if file_to cannot be created or written to - exit code 99
 *		if file_to or file_from cannot be closed - exit code 100
 */

int main(int argc, char *argv[])
{
	int src, dest, src_rd, dest_wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	src_rd = read(src, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || dest_wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		dest_wr = write(dest, buffer, src_rd);
		if (dest == -1 || dest_wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Ca't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		src_rd = read(src, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (src_rd > 0);

	free(buffer);
	close_file(src);
	close_file(dest);

	return (0);
}
