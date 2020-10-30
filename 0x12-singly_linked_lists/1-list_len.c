#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to a list;
 * Return: integer (nomber of elements)
 */
size_t list_len(const list_t *h)
{
	const list_t *first = h;
	int count = 0;

	while (first)
	{
		count++;
		first = first->next;
	}
	return (count);
}
