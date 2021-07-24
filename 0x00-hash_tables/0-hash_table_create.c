#include "hash_tables.h"

/**
 * hash_table_create - creating an array with with a variable size
 * @size: input size of array
 * Return: returns pointer to malloc array or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	hash_node_t **p;

	if (size == 0)
	{
		return (NULL);
	}

	newTable = malloc(sizeof(newTable));
	if (!(newTable))
	{
		return (NULL);
	}

	*p = malloc(size * sizeof(*p));

	if (!(*p))
	{
		free(newTable);
		return (NULL);
	}

	newTable->size = size;
	newTable->array = *p;

return (newTable);
}
