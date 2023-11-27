#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * copy_file - fucntion copies the content of one file to another.
 *
 * @file_from: The name of the source file.
 * @file_to:   The name of the destination file.
 *
 * Return: None.
 *
 * Exits the program with the following exit codes and prints
 * corresponding error messages to the standard error:
 * - 98: Can't read from file FILE_FROM
 * - 99: Can't write to file FILE_TO
 * - 100: Can't close file descriptor
 *
 * Sets permissions for FILE_TO to rw-rw-r--.
 */

void copy_file(const char *file_from, const char *file_to)
{
	int fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];
	/* Open file_from for reading */
	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	/* Open file_to for writing, create if it doesn't exist, */
	/* truncate if it does */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}

	/* Copy content from file_from to file_to */
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	/* Close file descriptors */
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		exit(100);
	}
	/* Set permissions for file_to to rw-rw-r-- */
	chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
}


/**
 * main - check the code
 *
 * @argc: skfmskfsfs
 * @argv: sofjslfjslf
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	/* Check the number of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}