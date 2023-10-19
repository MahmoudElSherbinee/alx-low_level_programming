#include "main.h"

/**
* print_buffer - Calculate the lenght of a string.
*
* @b: String
*
* @size: String
*/

void print_buffer(char *b, int size)
{
	int i;
	int j;
	char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", (unsigned char)b[i + j]);
			}
			else
			{
				printf("  ");
			}
			if (j % 2 == 1)
			{
				printf(" ");
			}
		}
		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				c = b[i + j];
				if (c >= ' ' && c <= '~')
				{
					printf("%c", c);
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
}
