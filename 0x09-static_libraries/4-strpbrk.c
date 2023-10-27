#include "main.h"

/**
* _strpbrk - prints buffer
*
* @s: check the input1
* @accept: check the input2
*
* Return: Nothing.
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL);
}
