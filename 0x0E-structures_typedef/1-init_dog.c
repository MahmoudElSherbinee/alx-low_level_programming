#include "dog.h"

/**
* init_dog - function that initialize a variable of type struct dog
*
* @d: the pointer of the data type
* @name: First member
* @age: Second member
* @owner: Third member
*
* Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
