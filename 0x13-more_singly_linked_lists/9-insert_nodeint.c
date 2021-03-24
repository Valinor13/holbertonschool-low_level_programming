#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node into a list
 * @head: pointer to head of list
 * @idx: position in list to add node
 * @n: value to store in node at idx
 * Return: returns pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nunode, *trav, *tmp;
	unsigned int i = 1;

	if (idx == 0)
	{
		nunode = malloc(sizeof(listint_t));
		if (nunode == NULL)
			return (NULL);
		nunode->n = n;
		nunode->next = (*head);
		*head = nunode;
		return (nunode);
	}
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	trav = *head;
	while (i < idx && trav->next != NULL)
	{
		trav = trav->next;
		i++;
	}
	if (trav->next == NULL && i < idx)
		return (NULL);
	tmp->next = trav->next;
	trav->next = tmp;
return (tmp);
}
