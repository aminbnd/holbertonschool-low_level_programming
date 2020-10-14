#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned integer
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int k = 0;
	unsigned int l = 0;
	char *c;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (n > j)
	n = j;
	c = malloc(sizeof(char) * (i + n + 1));
	if (c == NULL)
		return (NULL);
	for (k = 0; k < i; k++, l++)
		c[k] = s1[l];
	for (l = 0; l < n; l++, k++)
		c[k] = s2[l];
	c[k] = '\0';
	return (c);
}
