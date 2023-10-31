#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 *			to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, or 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_file, print_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_file = read(file, buffer, letters);
	if (read_file == -1)
		return (0);

	print_file = write(STDOUT_FILENO, buffer, read_file);
	if (print_file == -1 || read_file != print_file)
		return (0);

	free(buffer);
	close(file);

	return (print_file);
}
