#include "holberton.h"
/**
  **_strcat - concatenates two strings
  *Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] !='\0')
	{
		i++;
	}
	for (j = 0; src[j]; j++)
	{
		*(dest + i + j) = src[j];
	}
	*(dest + i + j) = '\0';
	return (dest);
}
