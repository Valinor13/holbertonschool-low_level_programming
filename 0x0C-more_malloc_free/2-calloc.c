#include "holberton.h"

/**
 * _calloc - creating the calloc function
 * @nmemb: memory blcok elements
 * @size: size of each element
 * Return: returns void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

return (ptr);
}
