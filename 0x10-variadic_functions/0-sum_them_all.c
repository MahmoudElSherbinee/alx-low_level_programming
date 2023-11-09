#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters.
*
* @n: the number of arguments to be passed
* @...: the arguments will be passed
*
* Return: the sum of all its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	int value;

	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(arguments, int);
		sum += value;
	}
	va_end(arguments);
	return (sum);
}
