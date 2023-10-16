#include "main.h"

/**
* puts2 - writes the character c to stdout
* @str: The character to print
*
* Return: On success 1.
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
