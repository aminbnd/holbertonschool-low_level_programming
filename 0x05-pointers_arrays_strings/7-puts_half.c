#include "holberton.h"
/**
  *puts_half - prints half of a string
  *@str: pointer
  *Return: nothing
  */
void puts_half(char *str)
{
	int i = 0;
	int j, k;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i / 2) + 1;
	}
	for (k = j; k < i; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}	
