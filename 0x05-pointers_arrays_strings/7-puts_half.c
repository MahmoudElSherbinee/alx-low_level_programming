#include "main.h"

/**
* puts_half- writes the character c to stdout
* @str: The character to print
*
* Return: On success 1.
*/

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		x++;
	}
	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
