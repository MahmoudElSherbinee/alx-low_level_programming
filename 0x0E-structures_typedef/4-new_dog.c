#include "dog.h"
#include <stdlib.h>
/**
* length - function that get the length of the string
*
* @n: check the input
*
* Return: the length of the string
*/

int length(char *n)
{
	int length = 0;

	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

/**
* copyString - function that copy string to string
*
* @source: check the string to be copied
* @copy: check the string that have the copy
*
* Return: Nothing
*/

void copyString(char *source, char *copy)
{
	int i;

	for (i = 0; source[i]; i++)
	{
		copy[i] = source[i];
	}
	copy[i] = '\0';
}

/**
* new_dog - function that initialize a variable of type struct dog
*
* @name: First member
* @age: Second member
* @owner: Third member
*
* Return: Nothing
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NEWDOG;
	char *NEWDOG_NAME;

	char *NEWDOG_OWNER;

	NEWDOG = malloc(sizeof(dog_t));
	if (NEWDOG == NULL)
	{
		return (NULL);
	}

	NEWDOG_NAME = malloc(sizeof(char) * (length(name) + 1));
	if (NEWDOG_NAME == NULL)
	{
		free(NEWDOG);
		return (NULL);
	}
	NEWDOG_OWNER = malloc(sizeof(char) * (length(owner) + 1));
	if (NEWDOG_OWNER == NULL)
	{
		free(NEWDOG_NAME);
		free(NEWDOG);
		return (NULL);
	}

	copyString(name, NEWDOG_NAME);
	copyString(owner, NEWDOG_OWNER);

	NEWDOG->name = NEWDOG_NAME;
	NEWDOG->age = age;
	NEWDOG->owner = NEWDOG_OWNER;

	return (NEWDOG);
}
