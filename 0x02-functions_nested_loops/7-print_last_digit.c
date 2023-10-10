#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function is to check the lowercase char
 *
 * @n: check the input
 *
 * Return: Always 0 (success)
*/


int print_last_digit(int n)
{
	if (n < 0)
{
	n = (n % 10) * -1;
}
	else
{
	n = n % 10;
}
_putchar (n + '0');
	return (n);
}
