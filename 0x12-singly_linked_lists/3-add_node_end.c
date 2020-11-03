#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: adress of the first node of the list
 * @str: adress of a string
 * Return: Adress of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *h;
	int count = 0;

	h = *head;
	new_node = malloc(sizeof(list_t));
	if (!str)
	{
		free(new_node);
		return (NULL);
	}
	while (str[count])
		count++;
	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = NULL;
	if (!h)
	{
		*head = new_node;
		return (new_node);
	}
	while (h->next)
		h = h->next;
	h->next = new_node;
	new_node->next = NULL;
	return (new_node);
}
