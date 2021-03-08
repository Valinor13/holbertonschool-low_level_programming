#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - dog characteristics
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif
