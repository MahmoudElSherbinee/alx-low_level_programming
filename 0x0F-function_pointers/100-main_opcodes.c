#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - check the code
 *
 * @argc: number of inputs
 * @argv: value of inputs
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *main_addr = (char *)main;
	int num_bytes;

	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		unsigned char opcode = *((unsigned char *)(main_addr + i));

		printf("%02x", opcode);
	}

	printf("\n");

	return (0);
}
