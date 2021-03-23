#include "lists.h"

/**
 * free_listint - frees allocated memory in a llist
 * @head: input pointer to head of list
 * Return: returns void
 */
void free_listint(listint_t *head)
{
	listint_t *noodle;

	while (head != NULL)
	{
		noodle = head->next;
		free(head);
		head = noodle;
	}
return;
}
