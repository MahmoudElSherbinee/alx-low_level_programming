#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
* struct dog - Short description
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description: define a new type struct dog with the following elements
*/

struct dog
{
	char *name;

	float age;

	char *owner;

};

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
