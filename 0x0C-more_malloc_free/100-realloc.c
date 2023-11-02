#include "main.h"

/**
* _realloc - fuction that making memory allocation
*
* @ptr: the address of already allocated memory block
* @old_size: the size of the already allocated memory block bytes
* @new_size: the new size of memory block we want to reallocate it
*
* Return: the new address
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newp;

	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newp = malloc(new_size);
		if (newp == NULL)
		{
			return (NULL);
		}
		return (newp);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	newp = malloc(new_size);
	if (newp == 0)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_size = old_size;
	}
	for (i = 0; i < new_size; i++)
	{
		((char *)newp)[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (newp);
}
