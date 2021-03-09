#include "dog.h"

/**
 * free_dog - frees allocated memory from previous task
 * @d: input pointer to structure
 * Return: returns void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
return;
}
