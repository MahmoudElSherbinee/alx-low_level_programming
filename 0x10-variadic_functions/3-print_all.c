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
    va_list arguments;
    int numofelem = strlen(format);
    int x;
    va_start(arguments, format);

    for (x = 0; x < numofelem; x++)
    {
        if (format[x] == 'c')
        {
            char c = va_arg(arguments, int);
            printf("%c", c);
        }
        else if (format[x] == 'i')
        {
            int i = va_arg(arguments, int);
            printf("%d", i);
        }
        else if (format[x] == 'f')
        {
            double f = va_arg(arguments, double);
            printf("%f", f);
        }
        else if (format[x] == 's')
        {
            char *s = va_arg(arguments, char *);
            if (s == NULL)
                printf("(nil)");
            else
                printf("%s", s);
        }
        else
        {
            continue;
        }

        if (x != numofelem - 1)
        {
            printf(", ");
        }
    }

    va_end(arguments);
    printf("\n");
}
