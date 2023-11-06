#ifndef DOG_H
#define DOG_H

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


void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
