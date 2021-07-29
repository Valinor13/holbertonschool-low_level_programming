#include "hash_tables.h"

/**
 * hash_table_delete - frees all memory in the table
 * @ht: the table being freed
 * Return: returns void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *trav, *current;

	if (!(ht))
		return;

	for (index = 0; index < ht->size; index++)
	{
		trav = ht->array[index];
		current = ht->array[index];
		while (trav)
		{
			current = trav->next;
			free(trav->key);
			free(trav->value);
			free(trav);
			trav = current;
		}
	}
	free(ht->array);
	free(ht);
return;
}
