#include "hash_tables.h"

/**
 * hash_table_print - prints the incoming hash table in json format
 * @ht: incoming hash table
 * Return: returns void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, cntr = 0;
	hash_node_t *trav;

	if (!(ht))
		return;

	putchar('{');
	for (index = 0; index < ht->size; index++)
	{
		trav = ht->array[index];
		if ((trav) && (cntr > 0))
			printf(", ");
		while (trav)
		{
			printf("'%s': '%s'", trav->key, trav->value);
			if (trav->next)
				printf(", ");
			cntr++;
			trav = trav->next;
		}
	}
	printf("}\n");
return;
}
