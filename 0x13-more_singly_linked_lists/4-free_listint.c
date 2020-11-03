#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first element of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *loop;

	while (head)
	{
		loop = head->next;
		free(head);
		head = loop;
	}
}
