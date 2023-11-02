#include "main.h"

/**
* malloc_checked - fuction that making memory allocation
*
* @b: check the number of bytes to be located
*
* Return: address of the memory address
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
