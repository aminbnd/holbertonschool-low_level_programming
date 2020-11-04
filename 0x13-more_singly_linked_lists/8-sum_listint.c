#include "lists.h"
/**
 * sum_listint - Returns the sum of all elements n of a list
 * @head: pointer to the first element of the list
 * Return: Integer (sum of the elements of the list)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
