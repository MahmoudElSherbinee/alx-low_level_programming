#include "main.h"

/**
* rot13 - fuction to list the separators and check the index
*
* @str: check the character
*
* Return: the char
*/

char *rot13(char *str)
{
	int i;

	int j;

	char l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char c[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (str[i] == l[j])
			{
				str[i] = c[j];
				break;
			}
		}
	}

	return (str);
}
