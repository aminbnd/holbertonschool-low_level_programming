#include "holberton.h"
/**
  *puts2 - prints an even character in a string
  *@str: pointer
  *Return: void
  */
void puts2(char *str)
{
	int i = 0;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar ('\n');
}
