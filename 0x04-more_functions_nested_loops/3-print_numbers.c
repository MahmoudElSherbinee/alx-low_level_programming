#include <stdio.h>
#include "main.h"

/**
 * print_numbers - check if the input is upper of not
 *
 * Description: this function print the digits
 *
 * Return: 0 if the input is upper and 1 if it's not
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9 ; i++)
{
	_putchar(i + '0');
}
	_putchar('\n');
}
