#include "lists.h"
#include <stdlib.h>
/**
 * free_list -  frees a list_t list
 * @head: pointer to the head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *loop;

	while (head)
	{
		loop = head->next;
		free(head);
		free(head->str);
		head = loop;
	}
}