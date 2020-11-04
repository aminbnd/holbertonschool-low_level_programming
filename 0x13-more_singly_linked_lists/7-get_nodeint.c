#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node (starting from 0)
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head->next && count < index)
	{
		head = head->next;
		count++;
	}
	if (count < index)
		return (NULL);
	return (head);
}
