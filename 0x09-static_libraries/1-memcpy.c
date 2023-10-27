#include "main.h"

/**
* _memcpy - prints buffer
*
* @dest: check the input1
* @src: check the input2
* @n: check the input2
*
* Return: Nothing.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (original_dest);
}
