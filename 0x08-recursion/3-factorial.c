#include "main.h"

/**
* factorial - master function
*
* @n: check the input
*
* Return: the factorial of the number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
