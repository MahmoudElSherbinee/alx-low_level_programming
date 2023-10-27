#include <stdio.h>
#include "main.h"

/**
 * _islower - function is the master function to check the lowercase char
 *
 * @c: check the input
 *
 * Return: Always 0 (success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else
{
	return (0);
}
}
