#include "main.h"
#include <limits.h>

/**
* _atoi - writes the character c to stdout
* @s: The character to print
*
* Return: On success 1.
*/

int _atoi(char *s)
{
	int sign = 1;

	int result = 0;

	int i = 0;

	while (s[i] == ' ' || s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			return (sign == 1) ? INT_MAX : INT_MIN;
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
