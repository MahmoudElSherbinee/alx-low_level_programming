#include "main.h"

/**
* _print_rev_recursion - master function
*
* @s: check the input
*
* Return: nothing to return
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	putchar(*s);
}
