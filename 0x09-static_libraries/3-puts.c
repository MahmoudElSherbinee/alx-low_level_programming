#include "main.h"

/**
* _puts - writes the character c to stdout
* @str: The character to print
*
* Return: On success 1.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
