#include "lists.h"

/**
 * print_list - print the linked lists
 * @h: pointer to the list head
 * Return: returns a structure node
 */
size_t print_list(const list_t *h)
{
	const list_t *current_node = h;
	int i = 0;

	while (current_node != NULL)
	{
		printf("[%d] ", current_node->len);
		printf("%s\n", (current_node->str == NULL ? "[0] (nil)" : current_node->str));
		i++;
		current_node = current_node->next;
	}
	return (i);
}
