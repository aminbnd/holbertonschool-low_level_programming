#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: unsigned integer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
