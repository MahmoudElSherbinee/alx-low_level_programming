#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - this is the master function
 *
 * Description: enable us to write a standard output
 *
 * Return: Always 0 (success)
*/

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
{
	_putchar(a);
}
	_putchar('\n');
}
