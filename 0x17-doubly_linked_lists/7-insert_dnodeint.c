#include "lists.h"
/**
 * insert_dnodeint_at_index - inster a new node in a given index
 * @h: head
 * @idx: index
 * @n: data
 * Return: adress of the new node in success, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1)
	{
		tmp = tmp->next;
		idx--;
		if (!tmp)
			return (NULL);
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
