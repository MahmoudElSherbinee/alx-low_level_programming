#include <stdio.h>
#include <stdlib.h>

/**
* main - the master function
*
* @argc: check the number of inputs
* @argv: check the value of the input
*
* Return: 0 always success
*/

int main(int argc, char *argv[])
{
	int i = 0;

	char *character;

	while (--argc)
	{
		for (character = argv[argc]; *character; character++)
		{
			if (*character < '0' || *character > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				i = i + atoi(argv[argc]);
			}
		}
	}
	printf("%d\n", i);
}
