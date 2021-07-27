#include "hash_tables.h"

/**
 * hash_table_create - creating an array with with a variable size
 * @size: input size of array
 * Return: returns pointer to malloc array or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;

	if (size < 1)
	{
		return (NULL);
	}

	newTable = malloc(sizeof(hash_table_t));
	if (!(newTable))
	{
		return (NULL);
	}

	newTable->array = malloc(size * sizeof(newTable));

	if (!(newTable->array))
	{
		free(newTable);
		return (NULL);
	}

	newTable->size = size;

return (newTable);
}
