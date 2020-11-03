#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list and stes the head to NULL
 * @head: first element of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *ptr2;

	ptr = *head;
	while (ptr)
	{
		ptr2 = ptr->next;
		free(ptr);
		ptr = ptr2;
	}
	*head = NULL;
}
