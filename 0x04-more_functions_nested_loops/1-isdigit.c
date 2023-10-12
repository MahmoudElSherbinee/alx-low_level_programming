#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check if the input is upper of not
 *
 * @c: check the inputs
 *
 * Return: 0 if the input is digit and 1 if it's not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
{
	return (1);
}
	else
{
	return (0);
}
}
