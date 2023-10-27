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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
