#include "holberton.h"

/**
 * _calloc - creating the calloc function
 * @nmemb: memory blcok elements
 * @size: size of each element
 * Return: returns void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

return (ptr);
}
