#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the list to print
 * Return: integer (number of nodes)
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *first = h;
	int count = 0;

	while (first)
	{
		printf("%i\n", first->n);
		first = first->next;
		count++;
	}
	return (count);
}
