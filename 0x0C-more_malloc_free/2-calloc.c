#include "main.h"

/**
* _calloc - fuction that making memory allocation
*
* @nmemb: check the number of bytes to be located
* @size: check the number of bytes to be located
*
* Return: address
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
