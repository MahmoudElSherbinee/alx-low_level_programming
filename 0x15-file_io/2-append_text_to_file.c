#include "main.h"

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

