#include "main.h"

/**
* _sqrt_helper - master function
*
* @n: check the input
* @low: check the input
* @high: check the input
*
* Return: the required pow
*/

int _sqrt_helper(int n, int low, int high)
{
	int mid;

	int square;

	if (low > high)
	{
		return (-1);
	}

	mid = low + (high - low) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_helper(n, low, mid - 1));
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
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_helper(n, 0, n));
}
