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
	int start = 0;

	int end = length - 1;

	while (start < end)
	{
		char swap = s[start];

		s[start] = s[end];
		s[end] = swap;
		start++;
		end--;
	}
}
