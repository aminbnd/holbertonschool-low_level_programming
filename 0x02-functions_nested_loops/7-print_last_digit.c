#include "holberton.h"
/**
  *print_last_digit - Prints the last digit of a number
  *@n: number
  *Return: last digit
  */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i = i * -1;
	}
	_putchar ('0' + i);
	return (i);
}
