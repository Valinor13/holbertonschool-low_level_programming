#include "lists.h"

/**
 * pop_listint - frees head of list
 * @head: pointer to head of list
 * Return: returns value stored in head
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *pasta;

	if (*head == NULL)
		return (0);

	pasta = *head;
	x = pasta->n;
	*head = pasta->next;
	free(pasta);
return (x);
}
