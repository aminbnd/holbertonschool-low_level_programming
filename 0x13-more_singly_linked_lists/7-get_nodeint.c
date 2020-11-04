#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node (starting from 0)
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	int pos = 0;

	if (!node)
		return (NULL);
	while (pos < index)
	{
		node = node->next;
		pos++;
	}
	return (node);
}
