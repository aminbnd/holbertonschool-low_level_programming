#include "holberton.h"
/**
  *_strlen - Length of a string
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
