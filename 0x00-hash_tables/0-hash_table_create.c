#include "hash_tables.h"

/**
 * hash_table_create - creating an array with with a variable size
 * @size: input size of array
 * Return: returns pointer to malloc array or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(p));

	if (p == NULL)
	{
		return (NULL);
	}

return (p);
}
