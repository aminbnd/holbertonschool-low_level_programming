#include "holberton.h"
/**
  *_strcpy - copy the string
  *@src: copied string
  *@dest: destination
  *Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
