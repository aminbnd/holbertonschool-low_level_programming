#include "holberton.h"
/**
 * one - prints the one digit block of statements
 * @mul: multiplicaion result for the later variables i and j
 * Return: void
 */
void one (int mul)
{
	_putchar (' ');
	_putchar (' ');
	_putchar (' ');
	_putchar ('0' + mul);
}

/**
 * two - Prints the two digits block of statements 
 * @mul: multiplicaion result for the later variables i and j
 * Return: void
 */
void two (int mul)
{
	_putchar (' ');
	_putchar (' ');
	_putchar ('0' + mul / 10);
	_putchar ('0' + mul % 10);
}
/**
 * three - Prints the three digits block
 * @mul: multiplicaion result for the later variables i and j
 * Return: void
 */
void three (int mul)
{
	_putchar (' ');
	_putchar (mul / 100 + '0');
	_putchar ((mul / 10) % 10 + '0');
	_putchar (mul % 10 + '0');
}

/**
 * print_times_table - prints n times table
 * @n: integer
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar ('0');
			_putchar (',');
			for (j = 1; j <= n; j++)
			{
				mul = i * j;
				if (mul >= 100)
				{
					three (mul);
					if (j != n)
					_putchar(',');
				}
				else if (mul >= 10)
				{
					two (mul);
					if (j != n)
					_putchar(',');
				}
				else
				{
					one (mul);
					if (j != n)
					_putchar (',');
				}
			}
			_putchar ('\n');
		}
		
	}
}
