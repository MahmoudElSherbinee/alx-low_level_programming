#include "main.h"

/**
* print_number - fuction to list the separators and check the index
*
* @n: check the character
*
* Return: the char
*/

void print_number(int n)
{
	unsigned int number;

	number = n;
	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}

	if (number / 10 != 0)
	{
		print_number(number / 10);
	}

	_putchar('0' + (number % 10));
}
