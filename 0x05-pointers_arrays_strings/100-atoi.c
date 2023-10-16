#include "main.h"
#include <limits.h>

/**
* _atoi - Converts a string to an integer.
* @s: The string to convert.
*
* Return: The integer value.
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
		int digit = s[i] - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + digit;
		i++;
	}

	return (sign * result);
}
