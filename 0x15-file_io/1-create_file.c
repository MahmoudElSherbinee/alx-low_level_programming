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
	int descriptor;
	ssize_t num_of_bytes = 0;
	ssize_t length = strlen(text_content);

	if (!filename)
	{
		return (-1);
	}

	descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (descriptor == -1)
	{
		return (-1);
	}

	if (length)
	{
		num_of_bytes = write(descriptor, text_content, length);
	}
	close(descriptor);

	return (num_of_bytes == length ? 1 : -1);
}
