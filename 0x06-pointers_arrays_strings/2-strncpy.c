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
	int i = 0;

	while (src[i] != '\n' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

