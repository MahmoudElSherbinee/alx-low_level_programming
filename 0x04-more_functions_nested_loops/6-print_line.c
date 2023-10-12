#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: check the inputs
 *
 * Return: 0 if the input is upper and 1 if it's not
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
{
	_putchar(95);
}
	_putchar('\n');
}
