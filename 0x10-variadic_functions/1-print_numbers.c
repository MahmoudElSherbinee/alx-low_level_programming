#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a new line.
*
* @separator: the string to be printed between numbers
* @n: the number of arguments to be passed
* @...: the arguments will be passed
*
* Return: Nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	int x;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(arguments, int);
		if (separator == NULL || i == n - 1)
		{
			printf("%d", x);
		}
		else
		{
			printf("%d%s", x, separator);
		}
	}
	printf("\n");
}
