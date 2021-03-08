#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - dog characteristics
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 */
typdef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
