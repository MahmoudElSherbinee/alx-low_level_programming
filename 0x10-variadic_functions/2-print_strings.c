#include "variadic_functions.h"

/**
* print_strings - function that prints strings, followed by a new line.
*
* @separator: the string to be printed between strings
* @n: the number of arguments to be passed
* @...: the arguments will be passed
*
* Return: Nothing.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	char *x;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(arguments, char *);
		if (!x)
		{
			x = "(nil)";
		}

		else if (separator == NULL || i == 0)
		{
			printf("%s", x);
		}
		else
		{
			printf("%s%s", separator, x);
		}
	}
	printf("\n");
	va_end(arguments);
}
