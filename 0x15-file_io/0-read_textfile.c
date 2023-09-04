#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it to the POSIX
 * 			standard output
 *
 * @filename: The file to read
 * @letters: Number of letters to read and print
 *
 * Return: 0 if it fails or is successful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_possible, count;
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

	read_possible = read(file, buffer, letters);
	if (read_possible == -1)
		return (0);

	free(buffer);

	close(file);

	return (count);
}
