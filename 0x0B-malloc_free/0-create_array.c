#include "main.h"

/**
* create_array - function for creating array
*
* @size: check the number of bytes
* @c: check the specific charachter
*
* Return: 0 Always success
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int x;

	if (size <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == 0)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
}
