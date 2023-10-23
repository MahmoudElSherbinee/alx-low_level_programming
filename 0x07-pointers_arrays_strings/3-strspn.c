#include "main.h"

/**
* _strspn - prints buffer
*
* @s: check the input1
* @accept: check the input2
*
* Return: Nothing.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	int match;
	char *a;

	while (*s)
	{
		match = 0;
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				match = 1;
				break;
			}
			a++;
		}

		if (match)
		{
			length++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (length);
}
