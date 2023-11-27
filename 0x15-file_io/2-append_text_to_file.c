#include "main.h"

/**
 * append_text_to_file - Appends text content to an existing file or creates
 *                       a new file if it does not exist.
 *
 * @filename: The name of the file to which text content will be appended.
 * @text_content: The text content to be appended to the file.
 *
 * Return:
 * On success, returns 1.
 * On failure or if @filename is NULL, returns -1.
 */


int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t descriptor;
	ssize_t num_of_bytes = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	descriptor = open(filename, O_WRONLY | O_APPEND);

	if (descriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		num_of_bytes = write(descriptor, text_content, strlen(text_content));
		if (num_of_bytes == -1)
		{
			close(descriptor);
			return (-1);
		}
	}

	close(descriptor);

	return (1);
}

