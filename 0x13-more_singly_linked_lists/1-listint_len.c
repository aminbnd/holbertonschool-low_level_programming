#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to a list
 * Return: integer (number of elements in a linked list)
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *first = h;
	int count = 0;

	while (first)
	{
		count++;
		first = first->next;
	}
	return (count);
}
