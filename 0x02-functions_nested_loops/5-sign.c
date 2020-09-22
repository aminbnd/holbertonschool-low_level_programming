#include "holberton.h"
/**
  *print_sign - check signs
  *@n: integer
  *Return: 1 when positive, 0 when zero, -1 otherwise
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (+1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

