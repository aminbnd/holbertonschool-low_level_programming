#include "holberton.h"
/**
  *print_rev - prints strings in reverse
  *@s: pointer
  *Return: nothing
  */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i > 0; i--)
	{
		_putchar(*(s + i - 1));
	}
	_putchar ('\n');
}
