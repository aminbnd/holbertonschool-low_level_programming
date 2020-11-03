#ifndef LISTS_H
#define LISTS_H
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
typedef unsigned long int size_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);



#endif
