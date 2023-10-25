#include "main.h"

/**
* _pow_recursion - master function
*
* @x: check the input
* @y: check the input
*
* Return: the required pow
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
