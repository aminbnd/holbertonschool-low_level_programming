#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position
 * @head: first element of the list
 * @idx: index of the new node
 * @n: new data
 * Return: adress of the new node if success, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *h;
	unsigned int count = 0;

	h = *head;
	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	while (count < idx)
	{
		h = h->next;
		count++;
	}
	new_node->next = h->next;
	h->next = new_node;
	return (new_node);
}
