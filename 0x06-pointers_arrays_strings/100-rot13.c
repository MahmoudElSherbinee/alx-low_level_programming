#include "main.h"

/**
* rot13 - fuction to list the separators and check the index
*
* @str: check the character
*
* Return: the char
*/

char *rot13(char *str)
{
	char *ptr = str;

	int i;

	for (i = 0; str[i]; i++)
	{
		char c = str[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';

			str[i] = (c - base + 13) % 26 + base;
		}
	}

	return (ptr);
}
