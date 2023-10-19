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

	int j;

	char separators[] = " \t\n,;.!?\"(){}";

	for (x = 0; x < 13; x++)
	{
		for (i = 0; n[i] != '\0'; i++)
		{
			if (n[i] == separators[x])
			{
				j = i + 1;
				while (n[j] != '\0' && !(n[j] >= 'A' && n[j] <= 'Z') && !(n[j] >= 'a' && n[j] <= 'z'))
				{
					j++;
				}
				if (n[j] >= 'a' && n[j] <= 'z')
				{
					n[j] -= 32;
				}
				i = j;
			}
		}
	}
	return (n);
}
