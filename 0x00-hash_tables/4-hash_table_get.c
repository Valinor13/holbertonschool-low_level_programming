#include "hash_tables.h"

/**
 * hash_table_get - retrieves value of key at table position
 * @ht: hast table node with position
 * @key: key for k/v pair
 * Return: returns the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *trav;

	if ((!(ht)) || (!(key)) || (strcmp(key, "") == 0))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	trav = ht->array[index];

	while (trav)
	{
		if (strcmp(trav->key, key) == 0)
			return (trav->value);
		trav = trav->next;
	}
	return (NULL);
}
