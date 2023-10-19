#include "main.h"

/**
 * lower - function to check if the character is lower case
 *
 * @c: input to check the character
 *
 * Return: the character if it is lower case
 */

int lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * separator - fuction to list the separators and check the index
 *
 * @c: check the character
 *
 * Return: 1 if the character is separator and 0 if it is not
 */

int separator(char c)
{
	int x;
	char separators[] = " \t\n,;.!?\"(){}";

	for (x = 0; x < 13; x++)
	{
		if (c == separators[x])
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * cap_string - the master function
 *
 * @n:check the input2
 *
 * Return: the char
 */

char *cap_string(char *n)
{
	int i;
	char *p;

	i = 0;
	p = n;

	while (*n)
	{
		if (separator(*n))
		{
			i = 1;
		}
		else if (lower(*n) && i)
		{
			*n = *n - 32;
			i = 0;
		}
		else
		{
			i = 0;
		}
		n++;
	}
	return (p);
}
