#include <stdio.h>
#include "main.h"

/**
 * more_numbers - check if the input is upper of not
 *
 * Description: this function prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 if the input is upper and 1 if it's not
*/

void more_numbers(void)
{
	int r;
	int i;

	for (r = 0; r < 10; r++)
{
	for (i = 0; i < 15; i++)
{
	printf("%d", i);
}
	printf("\n");
}
}
