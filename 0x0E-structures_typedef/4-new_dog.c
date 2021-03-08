#include "dog.h"

/**
 * new_dog - printing new dog
 * @name: input name
 * @age: input age
 * @owner: input owner
 * Return: returns structure nu_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, nlen, olen;
	char *nuname, *nuowner;
	float nuage;
	struct dog *nu_dog;

	nuage = age;
	nlen = olen = 0;

	while (name[nlen] != 00)
		nlen++;

	while (owner[olen] != 00)
		olen++;

	nuname = (char *)malloc(nlen * sizeof(char));
	if (nuname == NULL)
		return (NULL);

	nuowner = (char *)malloc(olen * sizeof(char));
	if (nuowner == NULL)
		return (NULL);

	for (i = 0; i <= nlen; i++)
		nuname[i] = name[i];

	for (i = 0; i <= olen; i++)
		nuowner[i] = owner[i];

	nu_dog->name = nuname;
	nu_dog->age = nuage;
	nu_dog->owner = nuowner;

	return (nu_dog);
}
