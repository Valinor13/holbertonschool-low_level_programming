#include "lists.h"

/**
 * print_listint - print all the members of all the nodes in a list
 * @h: input pointer to head of list
 * Return: reurns number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
