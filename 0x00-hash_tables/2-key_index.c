#include "hash_tables.h"

/**
 * key_index - returns the index the k/v pair should be stored at
 * @key: the key data
 * @size: the size of the hash table
 * Return: Returns the index of the k/v pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_node_t *newNode;

	newNode = malloc(sizeof(newNode));
	if (!(newNode))
	{
		return (NULL);
	}
}
