#include "lists.h"

/**
 * list_len - returns number of elements in list
 * @h: input structure head
 * Return: returns element count
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		i++;
		node = node->next;

	}
	return (i);
}
