#include "main.h"

/**
* _strdup - function for creating array
*
* @str: check the number of bytes
*
* Return: 0 Always success
*/

char *_strdup(char *str)
{
	unsigned int length;

	unsigned int i;

	char *ptr;

	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		length++;
	}
	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(length + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length + 1; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
