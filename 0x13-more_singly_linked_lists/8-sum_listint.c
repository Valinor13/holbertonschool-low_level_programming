#include "lists.h"

/**
 * sum_listint - sums the data in a list
 * @head: pointer to head of list
 * Return: returns int sum of data
 */
int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *noodle;

	if (head == NULL)
		return (0);

	noodle = head;

	while (noodle)
	{
		x += noodle->n;
		noodle = noodle->next;
	}
return (x);
}
