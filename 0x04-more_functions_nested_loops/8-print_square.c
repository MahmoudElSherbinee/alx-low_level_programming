#include <stdio.h>
#include "main.h"

/**
 * print_square -  draws a diagonal line on the terminal
 *
 * @size: check the inputs
 *
 * Return: 0 if the input is upper and 1 if it's not
*/

void print_square(int size)
{
	int r;
	int c;

	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	for (r = 0; r < size; r++)
{
	for (c = 0; c < size; c++)
{
	_putchar(35);
}
	_putchar('\n');
}
}
}
