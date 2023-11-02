#include "main.h"

/**
* string_nconcat - fuction that making memory allocation
*
* @s1: check the number of bytes to be located
* @s2: check the number of bytes to be located
* @n: check the number of bytes to be located
*
* Return: address of the memory address
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int length1 = 0;
	unsigned int length2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		length1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		length2++;
	}
	if (length2 <= n)
	{
		n = length2;
	}
	ptr = malloc(sizeof(char) * (length1 + n + 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		ptr[length1 + i] = s2[i];
	}
	ptr[length1 + n] = '\0';
	return (ptr);
}
