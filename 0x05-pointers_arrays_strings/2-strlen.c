#include "main.h"

/**
* _strlen - is a function that takes a pointer to an int as parameter
* and updates the value it points to to 98
*
* @s: check the input
*
* Return: 0 always success
*/

int _strlen(char *s)
{
	unsigned long int i = 0;

	while (i < s[i])
	{
		i++;
	}
	return (i);
}
