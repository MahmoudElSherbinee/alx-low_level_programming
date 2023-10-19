#include "main.h"

/**
* leet - fuction to list the separators and check the index
*
* @str: check the character
*
* Return: the char
*/

char *leet(char *str)
{
	char *ptr = str;

	int i;

	int j;

	char leet_map[] = {'a', 'e', 'o', 't', 'l'};

	char leet_replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_map[j]; j++)
		{
			if (str[i] == leet_map[j] || str[i] == (leet_map[j] - 32))
			{
				str[i] = leet_replace[j];
				break;
			}
		}
	}

	return (ptr);
}
