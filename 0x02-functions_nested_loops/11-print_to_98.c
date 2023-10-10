#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function is the master function to complete to 98
 *
 * @n: check the input
 *
 * Return: Always 0 (success)
*/

void print_to_98(int n)
{
	while (n < 98)
{
		printf("%d, ", n);
		n++;
}
	while (n > 98)
{
		printf("%d, ", n);
		n--;
}
	if (n == 98)
{
		printf("%d", n);
}
	printf("\n");
}
