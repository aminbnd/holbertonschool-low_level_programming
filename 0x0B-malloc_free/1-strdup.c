#include "holberton.h"
#include <stdlib.h>

/**
  *_strlen - Length of a string
  *@s: pointer
  *Return: i
  */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
/**
 * *_strdup - contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i, len;
	char *dup;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	dup = malloc(len * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
