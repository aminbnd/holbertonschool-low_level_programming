#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer the list to print
 * Return: integer (number of nodes)
 */
size_t print_list(const list_t *h)
{
	const list_t *first = h;
	int count = 0;

	while (first)
	{
		if (!first->str)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", first->len, first->str);
		first = first->next;
		count++;
	}
	return (count);
}
