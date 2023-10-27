#include "main.h"

/**
* _memset - prints buffer
*
* @s: check the input1
* @b: check the input2
* @n: check the input2
*
* Return: Nothing.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (start);
}
