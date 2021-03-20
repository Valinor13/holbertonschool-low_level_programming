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
 * add_node_end - adds a node to the end of a list
 * @head: input double pointer
 * @str: input string to copy into node
 * Return: returns a node for the list_t struct
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nunode;
	list_t *trav;
	list_t *tmp;

	if (*head == NULL)
	{
		nunode = malloc(sizeof(list_t));
		if (nunode == NULL)
			return (NULL);

		nunode->str = strdup(str);
		if (nunode->str == NULL)
		{
		free(nunode);
		return (NULL);
		}
		nunode->len = _strlen(nunode->str);
		nunode->next = NULL;
		*head = nunode;
		return (nunode);
	}
	if (str == NULL)
		return (NULL);
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str == strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = _strlen(tmp->str);
	tmp->next = NULL;
	trav = *head;
	while (trav->next != NULL)
		trav = trav->next;
	trav->next = nunode;
	return (tmp);
}
