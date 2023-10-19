#include "main.h"

/**
* _strcmp - the master function
*
* @s1: check the input1
*
* @s2:check the input2
*
* Return: always means success
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	int length1;

	int length2;

	length1 = 0;
	length2 = 0;

	for (i = 0; s1[i] != '\0'; i++)

	{
		length1++;
	}
	for (i = 0; s2[i] != '\0'; i++)

	{
		length2++;
	}

	if (length1 > length2)
	{
		return (15);
	}
	if (length1 < length2)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
