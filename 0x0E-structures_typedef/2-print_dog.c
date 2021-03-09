#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog structure
 * @d: input struct
 * Return: returns void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			puts("Name: nil");

		if (d->age != NULL)
			printf("Age: %f\n", d->age);

		else
			puts("Age: nil");

		if (d->owner == NULL)
			printf("Owner: %s\n", d->owner);

		else
			puts("Owner: nil");
	}
}
