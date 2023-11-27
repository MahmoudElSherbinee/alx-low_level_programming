#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int descriptor;
	ssize_t num_of_bytes = 0;
	ssize_t length = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (descriptor == -1)
	{
		return (-1);
	}

	if (length != 0)
	{
		num_of_bytes = write(descriptor, text_content, length);
	}
	close(descriptor);

	if (num_of_bytes == length)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
