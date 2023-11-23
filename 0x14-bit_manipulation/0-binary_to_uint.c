#include "main.h"

/**
 * length - function calculates the length of a null-terminated string.
 *
 * This function takes a null-terminated string as input and returns
 * the number of characters in the string, excluding the null terminator.
 *
 * @str: A pointer to the null-terminated string.
 *
 * Return: The length of the string.
 */

unsigned int length(const char *str)
{
	unsigned int i;

	unsigned int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * binary_to_uint - function converts a binary string to an unsigned integer.
 *
 * This function takes a binary string as input and converts it to an unsigned
 * integer. It checks for valid binary characters (0 and 1) and returns 0 if
 * there is any character other than '0' or '1' in the string or if the input
 * string is NULL.
 *
 * @b: A pointer to the binary string.
 * Return: The converted unsigned integer or 0 if there is an error.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, d = 1, total = 0;

	int i;

	if (!b)
	{
		return (0);
	}

	for (i = length(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		result = (b[i] - '0') * d;
		total += result;
		d *= 2;
	}
	return (total);
}
