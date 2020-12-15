#include "lists.h"
/**
 * dlistint_len - retruns the numbers of elements of a list
 * @h: head of a list
 * Return: integer (number of elements)
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
