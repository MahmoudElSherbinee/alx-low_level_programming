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
	char separators[13];

separators[0] = ' ';
separators[1] = '\t';
separators[2] = '\n';
separators[3] = ',';
separators[4] = ';';
separators[5] = '.';
separators[6] = '!';
separators[7] = '?';
separators[8] = '"';
separators[9] = '(';
separators[10] = ')';
separators[11] = '{';
separators[12] = '}';

	for (x = 0; x < 13; x++)
	{
		if (c == separators[x])
		{
			return (1);
		}
	}
	return (0);
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
	char *p;
	int i;

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
