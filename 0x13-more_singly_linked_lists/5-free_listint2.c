#include "lists.h"

/**
 * free_listint2 - free a list but leaves the head null
 * @head: input pointer to head of list
 * Return: returns void
 */
void free_listint2(listint_t **head)
{
	listint_t *noodle, *pasta;

	pasta = *head;

	while (pasta != NULL)
	{
		noodle = pasta->next;
		free(pasta);
		pasta = noodle;
	}
	*head = NULL;
return;
}
