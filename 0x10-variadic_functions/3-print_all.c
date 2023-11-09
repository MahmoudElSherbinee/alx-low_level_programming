#include "variadic_functions.h"

/**
* print_all - function that prints strings, followed by a new line.
*
* @format: the number of data type to be printed
* @...: the arguments will be passed
*
* Return: Nothing.
*/

void print_all(const char *const format, ...)
{
	int i = 0;

	va_list arguments;
	char *x;

	va_start(arguments, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arguments, int));
			break;

		case 'i':
			printf("%d", va_arg(arguments, int));
			break;

		case 'f':
			printf("%f", va_arg(arguments, double));
			break;

		case 's':
			x = va_arg(arguments, char *);
			printf("%s", x == NULL ? "(nil)" : x);
			break;

		default:
			i++;
			continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(arguments);
}
