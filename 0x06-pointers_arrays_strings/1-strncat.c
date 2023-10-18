#include "main.h"

/**
* _strncat - the master function
*
* @dest: check the input1
*
* @src:check the input2
*
* @n: check the input3
*
* Return: always means success
*/

char *_strncat(char *dest, char *src, int n)
{
	int l;

	int i;

	l = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		l++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
