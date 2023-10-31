#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, write_to_file, length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length] != '\0')
			length++;

		write_to_file = write(file, text_content, length);
		if (write_to_file == -1)
			return (-1);
	}

	close(file);
	return (1);
}
