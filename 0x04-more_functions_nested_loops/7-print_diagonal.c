#include <stdio.h>
#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 *
 * @n: check the inputs
 *
 * Return: 0 if the input is upper and 1 if it's not
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
{
	putchar('\n');  
}
	else
{
	for (i = 1; i <= n; i++)
{
	for (j = 1; j < i; j++)
{
	putchar(' ');
}
	putchar(92);
	putchar('\n');
}
}
}
