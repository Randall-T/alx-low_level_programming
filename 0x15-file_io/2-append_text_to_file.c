#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_string, string = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (string = 0; text_content[string];)
			string++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	write_string = write(file, text_content, string);

	if (file == -1 || write_string == -1)
		return (-1);

	close(file);

	return (1);
}
