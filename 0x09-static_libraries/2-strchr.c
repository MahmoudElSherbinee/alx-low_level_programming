#include "main.h"

/**
* _strchr - prints buffer
*
* @s: check the input1
* @c: check the input2
*
* Return: Nothing.
*/

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	return ((*s == c) ? s : NULL);
}
