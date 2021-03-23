#include "lists.h"

/**
 * _strlen - return the length of a string
 * @s: input string
 *
 * Return: returns the length of the string
 */
int _strlen(const char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

return (len);
}

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: input pointer to head of list
 * @n: integer value to store in new node
 * Return: returns a node for the list_t struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nunode;
	listint_t *trav;
	listint_t *tmp;

	if (*head == NULL)
	{
		nunode = malloc(sizeof(listint_t));
		if (nunode == NULL)
			return (NULL);

		nunode->n = n;
		nunode->next = NULL;
		*head = nunode;
		return (nunode);
	}
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	trav = *head;
	while (trav->next != NULL)
		trav = trav->next;
	trav->next = tmp;
	return (tmp);
}
