#include "dog.h"
#include <stdlib.h>

/**
* free_dog - function that free a variable of type struct dog
*
* @d: the pointer of the data type
*
* Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
