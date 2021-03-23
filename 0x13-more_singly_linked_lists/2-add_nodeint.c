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
 * add_nodeint - add a node to a list
 * @head: input pointer to head of list
 * @n: input int to store in new node
 * Return: returns a new node in list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nunode;

	if (head == NULL)
		return (NULL);

	nunode = malloc(sizeof(listint_t));
	if (nunode == NULL)
		return (NULL);

	nunode->n = n;
	nunode->next = *head;
	*head = nunode;
	return (nunode);
}
