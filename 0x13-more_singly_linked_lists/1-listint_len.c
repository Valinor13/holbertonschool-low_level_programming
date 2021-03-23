#include "lists.h"

/**
 * listint_len - counts the nodes in a list
 * @h: pointer to list
 * Return: returns node count
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const list_t *nood = h;

	while (nood != NULL)
	{
		i++;
		nood = nood->next;

	}
	return (i);
}
