#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		c[i] = 0;
	return (c);
}
