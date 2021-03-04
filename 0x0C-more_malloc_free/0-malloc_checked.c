#include "holberton.h"

/**
 * malloc_checked - determines if malloc succeeds or fails
 * @b: size of malloc
 * Return: returns void
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit (98);
return (p);
}
