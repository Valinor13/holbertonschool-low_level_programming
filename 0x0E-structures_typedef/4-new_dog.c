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
	struct dog *new_dog;

	nuage = age;
	nlen = olen = 0;
	while (name[nlen] != 00)
		nlen++;
	while (owner[olen] != 00)
		olen++;
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	nuname = malloc((nlen + 1) * sizeof(char));
	if (nuname == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	nuowner = malloc((olen + 1) * sizeof(char));
	if (nuowner == NULL)
	{
		free(new_dog);
		free(nuname);
		return (NULL);
	}
	for (i = 0; i <= nlen; i++)
		nuname[i] = name[i];
	for (i = 0; i <= olen; i++)
		nuowner[i] = owner[i];
	new_dog->name = nuname;
	new_dog->age = nuage;
	new_dog->owner = nuowner;
	return (new_dog);
}
