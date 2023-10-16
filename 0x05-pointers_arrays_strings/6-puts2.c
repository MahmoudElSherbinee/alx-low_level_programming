#include "main.h"

/**
* puts2 - writes the character c to stdout
* @str: The character to print
*
* Return: On success 1.
*/

void puts2(char *str)
{
	long int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
