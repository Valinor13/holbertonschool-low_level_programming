#include "dog.h"

/**
 * init_dog - new function to give dog variables value
 * @d: input struct
 * @name: first variable
 * @age: 2nd variable
 * @owner: third variable
 * Return: returns void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
return;
}
