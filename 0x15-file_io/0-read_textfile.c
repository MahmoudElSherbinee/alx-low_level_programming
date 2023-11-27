#include "main.h"

/**
 * read_textfile - Reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return:
 * If successful, returns the actual number of letters read and printed.
 *		If the file cannot be opened or read,
 * or if there's a write error, returns 0.
 *         If @filename is NULL or @letters is 0, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_of_bytes;
	int discriptor;
	char buffer[1024];

	if (filename == NULL || !letters)
	{
		return (0);
	}

	discriptor = open(filename, O_RDONLY);
	if (discriptor == -1)
	{
		return (0);
	}

	num_of_bytes = read(discriptor, buffer, letters);

	num_of_bytes = write(STDOUT_FILENO, buffer, num_of_bytes);

	close(discriptor);
	return (num_of_bytes);
}
