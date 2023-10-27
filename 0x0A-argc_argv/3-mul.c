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
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", i);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
