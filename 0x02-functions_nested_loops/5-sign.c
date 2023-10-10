#include <stdio.h>
#include "main.h"

/**
 * print_sign - function is the master function to check the lowercase char
 *
 * @n: check the input
 *
 * Return: Always 0 (success)
*/

int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n < 0)
{
	_putchar('-');
	return (-1);
}
	else if (n == 0)
{
	_putchar('0');
	return (0);
}
	return (0);
}
