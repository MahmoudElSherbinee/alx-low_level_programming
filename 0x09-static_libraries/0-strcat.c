#include "main.h"

/**
* _strcat - the master function
*
* @dest: check the input1
*
* @src:check the input2
*
* Return: always means success
*/

char *_strcat(char *dest, char *src)
{
	int l;

	int i;

	l = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		l++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
