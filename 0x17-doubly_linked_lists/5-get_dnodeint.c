#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: integer, index of  the node statring from 0
 * Return: the indexec node, or NULL of the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp =  head;

	if (!head)
		return (NULL);
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == index)
		return (tmp);
	return (NULL);
}
