#include "lists.h"

/**
 * get_nodeint_at_index - retrieve n node from list
 * @head: pointer to head of list
 * @index: index position of node in list
 * Return: returns pointer to node in list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *noodle;

	if (head == NULL)
		return (NULL);

	noodle = head;

	while (i < index && noodle != NULL)
	{
		noodle = noodle->next;
		i++;
	}

	return (noodle);
}
