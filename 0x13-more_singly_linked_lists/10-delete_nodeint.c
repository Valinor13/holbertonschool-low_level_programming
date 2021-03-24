#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in list at index posi
 * @head: input pointer to head of list
 * @index: posi in list to remove node
 * Return: 1 if success -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nunode, *trav, *tmp;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		nunode = *head;
		*head = nunode->next;
		free(nunode);
		return (1);
	}
	tmp = *head;
	trav = *head;
	while (i < index && trav->next != NULL)
	{
		trav = trav->next;
		tmp = tmp->next;
		i++;
	}
	if (trav->next == NULL && i < index)
		return (-1);
	trav = trav->next;
	tmp->next = trav->next;
	free(trav);
return (1);
}
