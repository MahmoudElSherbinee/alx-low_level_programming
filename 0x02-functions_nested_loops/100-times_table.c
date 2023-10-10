#include <stdio.h>
#include "main.h"


/**
 * print_times_table - function is the master function
 *
 *@n: check the input
 *
 * Return: table = r * c (success)
*/

void print_times_table(int n)
{
	if (n < 0 || n > 15)
{
	return ();
}
	for (int i = 0; i <= 10; i++)
{
		printf("%d * %d = %d\n", i, n, i * n);
}
}
