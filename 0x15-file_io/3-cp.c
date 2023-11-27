#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
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
	int fd_to = 0, fd_from = 0;
	ssize_t bytes;
	char buffer[BUFFER];
	/* Open file_from for reading */
	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	/* Open file_to for writing, create if it doesn't exist, */
	/* truncate if it does */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, PERMS);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	/* Copy content from file_from to file_to */
	while ((bytes = read(fd_from, buffer, BUFFER)) > 0)
	{
		if (write(fd_to, buffer, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		if (bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd_from);
			exit(99);
		}
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file fd %d\n", fd_from);
		exit(100);
	}
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
