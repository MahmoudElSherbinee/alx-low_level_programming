#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function is the master function to check the lowercase char
 *
 * @c: check the input
 *
 * Return: Always 0 (success)
*/





int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
{
	return (1);
}
	else
{
	return (0);
}
}
