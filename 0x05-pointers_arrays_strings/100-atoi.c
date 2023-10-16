#include "main.h"
#include <limits.h>
#include <ctype.h>
/**
* _atoi - writes the character c to stdout
* @s: The character to print
*
* Return: On success 1.
*/
int _atoi(char *s)
{

	int result = 0;

	int sign = 1;

	while (*s && !isdigit(*s))
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}

	while (*s && isdigit(*s))
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}
