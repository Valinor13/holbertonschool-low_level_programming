#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creating an array with with a variable size
 * @size: input size of array
 * @c: input character to fill array
 * Return: returns pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

return (p);
}
