#include "main.h"

/**
 * create_file - Creates a new file with the specified filename
 *               and writes the given text content to it.
 *
 * @filename: The name of the file to be created or overwritten.
 * @text_content: The text content to be written to the file.
 *
 * Return:
 * On success, returns 1.
 * On failure or if @filename is NULL, returns -1.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t descriptor;
	ssize_t num_of_bytes = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (descriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		num_of_bytes = write(descriptor, text_content, strlen(text_content));
	}
	close(descriptor);

	return (num_of_bytes == strlen(text_content) ? 1 : -1);
}
