#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 1024

void print_exit(int code, const char *msg, const char *file);

/**
* main - function Copies the content from one file to another.
*
* @ac: Count of command-line arguments
* @av: Array of command-line arguments
*
* Return: 0 on success
*/
int main(int ac, char **av)
{
	int src, dst, bytes_read, bytes_written;

	char buffer[BUFFSIZE];

	if (ac != 3)
		print_exit(97, "Usage: cp file_from file_to\n", av[0]);

	src = open(av[1], O_RDONLY);
	if (src == -1)
		print_exit(98, "Error: Can't read from file %s\n", av[1]);

	dst = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dst == -1)
		print_exit(99, "Error: Can't write to %s\n", av[2]);

	while ((bytes_read = read(src, buffer, BUFFSIZE)) > 0)
	{
		bytes_written = write(dst, buffer, bytes_read);
		if (bytes_written == -1)
			print_exit(99, "Error: Can't write to %s\n", av[2]);
	}

	if (bytes_read == -1)
		print_exit(98, "Error: Can't read from file %s\n", av[1]);

	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	if (close(dst) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dst);
		exit(100);
	}
	return (0);
}

/**
* print_exit - Print an error message and exit with a code.
*
* @code: Exit code for the program
* @msg: Error message to print
* @file: File name associated with the error
*/

void print_exit(int code, const char *msg, const char *file)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}
