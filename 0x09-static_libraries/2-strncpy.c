#include "main.h"

/**
* _strncpy - the master function
*
* @dest: check the input1
*
* @src:check the input2
*
* @n: check the input3
*
* Return: always means success
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
