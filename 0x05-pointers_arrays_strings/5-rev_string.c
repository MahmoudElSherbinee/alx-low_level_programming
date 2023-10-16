#include "main.h"

/**
* rev_string - writes the character c to stdout
* @s: The character to print
*
* Return: On success 1.
*/

void rev_string(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	int a = 0;

	int z = length - 1;

	while (a < z)
	{
		char swap = s[a];

		s[a] = s[z];
		s[z] = swap;
		a++;
		z--;
	}
}
