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

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
