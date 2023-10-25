#include "main.h"

/**
* _sqrt_helper - master function
*
* @n: check the input
* @i: check the input
*
* Return: the required pow
*/

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (_sqrt_helper(n, i + 1));
	}
	else
	{
		return (-1);
	}
}

/**
* _sqrt_recursion - master function
*
* @n: check the input
*
* Return: the required pow
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
