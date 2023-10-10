#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - this is the master function
 *
 * Description: enable us to write a standard output
 *
 * Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
{
		for (y = 'a'; y <= 'z'; y++)
{
			putchar(y);
}
	putchar('\n');
}
}
