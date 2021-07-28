#include "hash_tables.h"

/**
 * hash_table_set - sets the new node in the table
 * @ht: incoming hash table
 * @key: incoming key
 * @value: value of incoming key
 * Return: returns 0 for failure or 1 for  success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long int index;

	if ((!(key)) || (!(value)) || (strcmp(key, "") == 0))
		return (0);

	newNode = malloc(sizeof(hash_node_t));
	if (!(newNode))
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	index = key_index((const unsigned char *)key, ht->size);
	if ((index == 0) || (ht->array[index]))
	{
		newNode->next = ht->array[index];
		ht->array[index] = newNode;
		return (1);
	}
	ht->array[index] = newNode;
	return (1);
}
