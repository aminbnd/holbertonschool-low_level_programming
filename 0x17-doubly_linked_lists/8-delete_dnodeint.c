#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: head of the list
 * @index: integer, the given index, starts at 0
 * Return: 1 on success, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	unsigned int i = index;

	if (*head == NULL)
		return (-1);
	while (i != 0)
	{
		h = h->next;
		i--;
		if (!h)
			return (-1);
	}
	if (h != *head)
	{
		h->prev->next = h->next;
		if (h->next)
			h->next->prev = h->prev;
	}
	else
	{
		*head = h->next;
		if (*head)
			(*head)->prev = NULL;
	}
	free(h);
	return (1);
}
