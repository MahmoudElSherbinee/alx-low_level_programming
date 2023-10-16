#include "main.h"

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

	while (*s)
	{
		if (*s == '-')
		{
			sign = sign * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
		}
		else if (result > 0)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
