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
	int x, i;
	char c;
	float f;
	char *s;
	va_list arguments;
	int numofelem = strlen(format);

	va_start(arguments, format);
	for (x = 0; x < numofelem; x++)
	{
		if (format[x] == 'c')
		{
			c = va_arg(arguments, int);
			printf("%c", c);
		}
		else if (format[x] == 'i')
		{
			i = va_arg(arguments, int);
			printf("%d", i);
		}
		else if (format[x] == 'f')
		{
			f = va_arg(arguments, double);
			printf("%f", f);
		}
		else if (format[x] == 's')
		{
			s = va_arg(arguments, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		else if (format[x] != 'c' || format[x] != 'i'
		|| format[x] != 'f' || format[x] != 's')
		{
			continue;
		}
		if (x != numofelem - 1)
			printf(", ");
	}
	printf("\n");
}
