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
 * add_node - adds a node to a list
 * @head: double pointer to head node
 * @str: input str being added
 * Return: returns a structure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nunode;

	if (head == NULL || str == NULL)
		return (NULL);

	nunode = malloc(sizeof(list_t));
	if (nunode == NULL)
		return (NULL);

	nunode->str = strdup(str);
	if (nunode->str == NULL)
	{
		free(nunode);
		return (NULL);
	}
	nunode->len = _strlen(str);
	nunode->next = *head;
	*head = nunode;
	return (nunode);
}
