#include <stdio.h>
#include "main.h"

/**
 *_abs - function is the master function to check the lowercase char
 *
 * @n: check the input
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
	{
	n = n * -1;
}
	else
{
	n = n + 0;
}
	return (n);
}
