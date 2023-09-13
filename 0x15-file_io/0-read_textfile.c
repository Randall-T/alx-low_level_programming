#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it to the POSIX
 *			standard output
 *
 * @filename: pointer to the file
 * @letters: Number of letters to read and print
 *
 * Return: 0 if it fails or is successful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t check_open, read_possible, count;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	check_open = open(filename, O_RDONLY);
	read_possible = read(check_open, buffer, letters);
	count = write(STDOUT_FILENO, buffer, read_possible);

	if (check_open == -1 || read_possible == -1 || count == -1 ||
			count != read_possible)
	{
		free(buffer);
		return (0);
	}

	free(buffer);

	close(check_open);

	return (count);
}
