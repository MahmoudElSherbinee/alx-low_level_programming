#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if the input is upper of not
 *
 * @c: check the inputs
 *
 * Return: 0 if the input is upper and 1 if it's not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
{
	return (1);
}
	else
{
	return (0);
}
}
