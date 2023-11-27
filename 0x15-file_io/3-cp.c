#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>



#define USE "Usage: cp file_from file_to\n"
#define N_READ "Error: Can't read from file %s\n"
#define N_WRITE "Error: Can't write to %s\n"
#define N_CLOSE "Error: Can't close fd %d\n"


#define BUFFER 1024
#define PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - check the code
 *
 * @argc: skfmskfsfs
 * @argv: sofjslfjslf
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int  fd_from = 0, fd_to = 0;
	ssize_t bytes;
	char buffer[BUFFER];

	if (argc != 3)
	{dprintf(STDERR_FILENO, USE);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{dprintf(STDERR_FILENO, N_READ, argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMS);
	if (fd_to == -1)
	{dprintf(STDERR_FILENO, N_WRITE, argv[2]);
		exit(99);
	}
	while ((bytes = read(fd_from, buffer, BUFFER)) > 0)
	{
		if (write(fd_to, buffer, bytes) != bytes)
		{dprintf(STDERR_FILENO, N_WRITE, argv[2]);
			exit(99);
		}
		if (bytes == -1)
		{dprintf(STDERR_FILENO, N_READ, argv[1]);
			exit(98);
		}
	}
	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (fd_from)
	{dprintf(STDERR_FILENO, N_CLOSE, fd_from);
		exit(100);
	}
	if (fd_to)
	{	dprintf(STDERR_FILENO, N_CLOSE, fd_from);
		exit(100);
	}
	return (EXIT_SUCCESS);
}
