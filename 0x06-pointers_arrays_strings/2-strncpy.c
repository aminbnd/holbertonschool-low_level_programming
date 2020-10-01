#include "holberton.h"
/**
  **_strncpy - copy of a string
  *@dest: pointer
  *@src: pointer
  *@n: int
  *Return: nothing
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while  (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

