#include <stdio.h>
#include "main.h"

/**
 * print_number - this is the master function
 *
 * Description: This function print the integar
 *
 * @n: check the input of integar
*/


void print_number(int n)
{
	if (n < 0)
{
	_putchar('-');
	n = -n;
}
	if (n / 10 != 0)
{
	print_number(n / 10);
}
	_putchar('0' + n % 10);
}
