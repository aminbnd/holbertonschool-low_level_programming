#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - eletes the head node of a listint_t linked list
 * @head: double pointer to the first node of the list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int count;

	h = *head;
	if (h == NULL)
		return (0);
	*head = h->next;
	count = h->n;
	free(h);
	return (count);
}
