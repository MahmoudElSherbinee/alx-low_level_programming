#include "dog.h"

/**
* free_dog - function that free a variable of type struct dog
*
* @d: the pointer of the data type
*
* Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
