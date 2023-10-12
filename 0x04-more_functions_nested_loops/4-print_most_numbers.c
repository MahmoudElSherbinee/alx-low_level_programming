#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - check if the input is upper of not
 *
 * Description: this function prints most numbers
 *
 * Return: 0 if the input is upper and 1 if it's not
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9 ; i++)
{
	if (i == 2 || i == 4)
{
	continue;
}
	else
{
	_putchar(i + '0');
}
}
	_putchar('\n');
}
