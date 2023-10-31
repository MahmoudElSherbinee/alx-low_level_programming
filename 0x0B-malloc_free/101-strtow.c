#include "main.h"

/**
* length - function to count the length of string
*
* @c: check the array of characters
*
* Return: 0 always success
*/

int length(char *c)
{
	int i;

	int len;

	len = 0;
	for (i = 0; c[i]; i++)
	{
		if (c[i] != ' ' && (c[i - 1] == ' ' || i == 0))
			len++;
	}
	return (len);
}

/**
* freeArray -  function that free a 2 dimentios array
*
* @array: check the array we want to free
* @length: check the length of this array
*/
void freeArray(char **array, int length)
{
	int i;

	for (i = 0; i < length; i++)
		free(array[i]);
	free(array);
}

/**
* strtow - function to concatenate all arguments
*
* @str: check the arguments count
*
* Return: 0 always success
*/

char **strtow(char *str)
{
	int size, first, i, j, len, pos = 0;
	char **nofwords;

	if (str == NULL || *str == '\0')
		return (NULL);

	size = length(str);
	if (size == 0)
		return (NULL);

	nofwords = malloc(sizeof(char *) * (size + 1));
	if (nofwords == NULL)
		return (NULL);

	nofwords[size] = NULL;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{
			first = i;
			len = 0;
			while (str[i] != ' ' && str[i])
			{
				len++;
				i++;
			}
			nofwords[pos] = malloc(sizeof(char) * (len + 1));
			if (nofwords[pos] == NULL)
			{
				freeArray(nofwords, pos);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				nofwords[pos][j] = str[first + j];
			nofwords[pos][j] = '\0';
			pos++;
		}
	}
	return (nofwords);
}

