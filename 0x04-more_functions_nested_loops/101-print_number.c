#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 *
 * Description: This function prints an integer.
 *
 * Return: (void)
*/

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
{
	_putchar('-');
	x = -x;
}
	if (x / 10 != 0)
{
	print_number(x / 10);
}
	_putchar('0' + x % 10);
}
