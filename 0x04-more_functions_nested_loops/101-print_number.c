#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
#include "main.h"

void print_number(int n)
{
    if (n < 0)
    {
        _putchar(45);
        n = -n;
    }

    if (n / 10 != 0)
    {
        print_number(n / 10);
    }

    _putchar('0' + n % 10);
}
