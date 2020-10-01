#include "holberton.h"
/**
  *string_toupper - changes lowercase to uppercase
  *@a: pointer
  *Return: array of string
  */
char *string_toupper(char *a)
{
	int i = 0;
	int j;

	while (a[i] != '\0')
	{
		i++;
	}
	for (j = 0; a[j] != '\0'; j++)
	{
		if (a[j] >= 'a' && a[j] <= 'z')
		{
			a[j] = a[j] - 32;
		}
	}
	return (a);
}
