#include "main.h"

/**
* _strcpy- writes the character c to stdout
*
* @dest: check the input
* @src: check the input
*
* Return: On success 1.
*/

char *_strcpy(char *dest, char *src)

{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
