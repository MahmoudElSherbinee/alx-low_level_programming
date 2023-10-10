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
	int r;
	int c;
	int table;

	for (r = 0; r <= n; r++)
{
	for (c = 0; c <= n; c++)
{
		table = r * c;
		if (c == n)
{
			printf("%3d", table);
}
		else
{
			printf("%3d, ", table);
}
}
	printf("\n");
}
}
