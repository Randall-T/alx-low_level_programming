#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to the string to write to the file
 * Return: 1 on Success and -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int file, write_string, string = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (string = 0; text_content[string];)
			string++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_string = write(file, text_content, string);

	if (file == -1 || write_string == -1)
		return (-1);

	close(file);

	return (1);
}
