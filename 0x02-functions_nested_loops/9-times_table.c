#include <stdio.h>
#include "main.h"


/**
 * times_table - function is the master function to check the lowercase char
 *
 * Return: Always 0 (success)
*/

void times_table(void)
{
	int r;
	int c;
	int table;

	for (r = 0; r <= 9; r++)
{
	for (c = 0; c <= 9; c++)
{
	table = r * c;
	if (c == 9)
{
	printf("%2d", table);
}
	else if (c == 0)
{
	printf("%d, ", c);
}
	else
{
	printf("%2d, ", table);
}
}
	printf("\n");
}
}
