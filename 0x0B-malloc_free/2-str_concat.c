#include "main.h"
/**
* str_concat - function for creating array
*
* @s1: check the first string
* @s2: check the second string
*
* Return: 0 Always success
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	unsigned int len1 = 0;

	unsigned int len2 = 0;

	int i;

	int size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;

	size = len1 + len2;
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[size] = '\0';
	return (ptr);
}
