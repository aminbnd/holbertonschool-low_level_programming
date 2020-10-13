#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, k;

	if (s1 == NULL)
		return (NULL);
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		return (NULL);
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	c = malloc ((i + j + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		c[k] = s1[k];
	for (k = 0; k < j; k++)
		c[k + i] = s2[k];
	c[i + j + 1] = '\0';
	return (c); 	
}
