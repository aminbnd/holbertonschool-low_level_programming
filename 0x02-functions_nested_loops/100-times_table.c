#include "holberton.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: integer, size of the table
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, res;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				res = i * j;
				if (res < 10)
				{
					if (j <= n)
					{
						oneDigitResultLayout();
					}
					oneDigitResult(res);
				}
				else if (res < 100)
				{
					if (j <= n)
					{
						twoDigitsResultLayout();
					}
					twoDigitResult(res);
				}
				else
				{
					if (j <= n)
					{
						threeDigitsResultLayout();
					}
					threeDigitResult(res);
				}
			}
			_putchar('\n');
		}
	}
}
