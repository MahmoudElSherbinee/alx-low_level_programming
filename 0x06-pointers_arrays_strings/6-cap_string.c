#include "main.h"

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

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == '\n' || n[i] == '\t' || n[i] == 32)
		{
			if (n[i + 1] >= 97 && n[i + 1] <= 122)
			{
				n[i + 1] = n[i + 1] - 32;
			}
		}
	}
	return (n);
}
