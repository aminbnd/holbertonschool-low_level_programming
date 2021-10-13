#include "holberton.h"

/**
 * oneDigitResultLayout - prints one digit multiplication result layout
 * Return: void
 */
void oneDigitResultLayout(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}

/**
 * twoDigitsResultLayout - prints one digit multiplication result layout
 * Return: void
 */
void twoDigitsResultLayout(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');

}



/**
 * threeDigitResult - prints three digits multiplication result
 * @res: int, the multiplication result
 * Return: void
 */

void threeDigitResult(int res)
{
	_putchar('0' + res / 100);
	_putchar('0' + (res / 10) % 10);
	_putchar('0' + res % 10);
}

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
					_putchar('0' + res);
				}
				else if (res < 100)
				{
					if (j <= n)
					{
						twoDigitsResultLayout();
					}
					_putchar('0' + (res / 10));
					_putchar('0' + (res % 10));
				}
				else
				{
					if (j <= n)
					{
						_putchar(',');
						_putchar(' ');
					}
					threeDigitResult(res);
				}
			}
			_putchar('\n');
		}
	}
}
