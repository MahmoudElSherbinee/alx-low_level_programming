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

	int x;

	char separators[] = " \t\n,;.!?\"(){}";

	for (x = 0; x < 13; x++)
	{
		for (i = 0; n[i] != '\0'; i++)
		{
			if (n[i] == separators[x])
			{
				if (n[i + 1] >= 97 && n[i + 1] <= 122)
				{
					n[i + 1] = n[i + 1] - 32;
				}
			}
		}
	}
	return (n);
}
