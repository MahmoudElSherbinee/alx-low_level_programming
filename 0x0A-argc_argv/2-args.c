#include <stdio.h>

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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
