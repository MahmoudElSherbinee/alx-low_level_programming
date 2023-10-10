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

	for (r = 0; r <= 9; r++)
{
	for (c = 0; c <= 9; c++)
{
	int table = r * c;
}
	printf("%22d, ", table);
}
}
